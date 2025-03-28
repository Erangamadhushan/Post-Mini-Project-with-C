#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler function
void signal_handler(int sig) {
    switch (sig) {
        case SIGINT:
            printf("\nReceived SIGINT (Ctrl+C) signal. Gracefully exiting...\n");
            exit(0);  // Graceful exit on Ctrl+C
            break;
        case SIGSTOP:
            printf("\nReceived SIGSTOP signal. This signal cannot be handled by the process directly.\n");
            // SIGSTOP cannot be caught or ignored, so we can't handle it here.
            break;
        case SIGTERM:
            printf("\nReceived SIGTERM signal. Terminating process...\n");
            exit(0);  // Graceful exit on SIGTERM (used to ask the program to terminate)
            break;
        default:
            printf("\nReceived unknown signal.\n");
    }
}

int main() {
    // Set up signal handlers
    if (signal(SIGINT, signal_handler) == SIG_ERR) {
        perror("Error setting SIGINT handler");
        return 1;
    }
    
    if (signal(SIGTERM, signal_handler) == SIG_ERR) {
        perror("Error setting SIGTERM handler");
        return 1;
    }

    // SIGSTOP cannot be caught or handled in this way, so we will just print info about it.
    printf("Program is running. Use the following signals:\n");
    printf("  - Press Ctrl+C to send SIGINT (Interrupt).\n");
    printf("  - Use `kill -TERM <pid>` to send SIGTERM (Terminate).\n");
    printf("  - Use `kill -STOP <pid>` to send SIGSTOP (Pause).\n");

    // Infinite loop to keep the program running
    while (1) {
        // Simulate some work
        sleep(1);
    }

    return 0;
}
