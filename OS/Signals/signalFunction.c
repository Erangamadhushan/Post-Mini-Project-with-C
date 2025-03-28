#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler function
void signal_handler(int sig) {
    if (sig == SIGINT) {
        printf("\nReceived SIGINT (Ctrl+C) signal. Exiting gracefully...\n");
        exit(0);
    }
}

int main() {
    // Set the signal handler for SIGINT (Ctrl+C)
    if (signal(SIGINT, signal_handler) == SIG_ERR) {
        perror("Error setting signal handler");
        return 1;
    }

    printf("Program running. Press Ctrl+C to send SIGINT signal.\n");

    // Infinite loop to keep the program running
    while (1) {
        // Simulating some work
        sleep(1);
    }

    return 0;
}
/*

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

//Signal handler function

void signal_handler(int sig) {
	if(sig == SIGINT) {
		printf("\nReceived SIGINT (Ctrl+C) signal. Exiting gracefully..\n");
		exit(0);
	}
}

int main() {
	//Set the signal handler for SIGINT (Ctrl+C)
	if(signal(SIGINT,signal_handler) == SIG_ERR) {
		perror("Error setting signal handler");
		return 1;
	}
	
	printf("Program running. Press C
}
*/
