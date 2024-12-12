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
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
#include "monitor.h"
#include "checkin.h"

/* The maximum length of each word in a file */
#define MAX_LINE_LEN 2000

// TODO: Add any additional helper functions necessary (i.e. for word length calculation, printing output)
// TODO: Useful function: strftime for date time.  Use %c flag for output in accordance with assignment requirements.

// TODO: Add comments to each function

void* processFile (void *param) {
    // TODO: Fill in with thread logic
    // TODO: Read the file provided
    // TODO: Process the file per chapter - use the barrier when chapters are done
    // TODO: Output chapter starting message
    // TODO: Store words in the shared state, be careful to avoid duplicates
    // TODO: Output a completed message when done
    // TODO: Free strings or buffers malloc-ed in the function
}
