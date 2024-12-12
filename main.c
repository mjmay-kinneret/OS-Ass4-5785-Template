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
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include "monitor.h"
#include "file-processor.h"
#include "checkin.h"

struct thread_info {
	pthread_t thread_id;
	int thread_num;
	char *argv_string;
};

monitor_t *theMonitor;
/* The maximum length of each word in a file */
#define MAX_LINE_LEN 2000

// TODO: Add comments to each function

int monitor_init (monitor_t *monitor, int topCount, int numFiles)
{
    // TODO: Initialize the monitor with the parameters needed
    return 0;
}

void showUsage()
{
	// TODO: Print the usage message
}

int main(int argc, char* args[])
{
    // TODO: Read the parameters
    // TODO: Initialize the monitor using monitor_init
	// TODO: Setup a signal handler for Ctrl+C
    // TODO: Create a thread for each file -  use processFile() function
    // TODO: Wait for the threads to complete
    // TODO: Output the final results - longest words requested, each word length alphabetized
    // TODO: Free everything that was malloc-ed in the setup
    return 0;
}
