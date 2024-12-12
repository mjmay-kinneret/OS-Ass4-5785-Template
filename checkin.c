/**
* Assignment 4: Longest Words Starter Code
* Operating Systems
* Kinneret College on the Sea of Galilee
* Lecturer: Michael J. May
*
* Version: 2024/5785
*
* Students:
*
**/
#include "monitor.h"

// TODO: Fill in the function comment here
void checkin(monitor_t *monitor, char *czFileName, int iChapterNum) {
    pthread_mutex_lock(&monitor->lock);
    monitor->numEntered++;
    if (monitor->numEntered < monitor->numThreads) {
        while (monitor->numEntered < monitor->numThreads) {        		
			pthread_cond_wait(&monitor->allCheckedIn, &monitor->lock);
		}
    } else { 
	// no threads in allLeaving.wait
        monitor->numLeaving = 0;
        pthread_cond_broadcast(&monitor->allCheckedIn);
    }
    
    monitor->numLeaving++;
    if (monitor->numLeaving < monitor->numThreads) {
        while (monitor->numLeaving < monitor->numThreads) {
			pthread_cond_wait(&monitor->allLeaving, &monitor->lock);
		}
    } else { 
    // no threads in allCheckedIn.wait
        monitor->numEntered = 0;
        pthread_cond_broadcast(&monitor->allLeaving);
    }
    pthread_mutex_unlock(&monitor->lock);
}
