#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>


void signal_handler(int signal) {
    switch(signal) {
        case SIGINT:
        printf("Received SIGINT \n");
        exit(0);

        case SIGUSR1:
        printf("Received SIGUSR1\n");
        break;
        
        case SIGTERM:
        printf("Received SIGTERM\n");
        exit(0);
    }
}

void basicKill() {
    pid_t pid = fork();

    if(pid < 0) {
        perror("Fork failed \n");
        exit(1);
    }
    else if (pid == 0) {
        //Child process

        printf("Child process (PID : %d) waiting for signal \n", getpid());

        //Setup signal handler
        signal(SIGUSR1, signal_handler);

        pause();

        exit(0);
    }
    else {
        //Parent process

        printf("Parent process (PID : %d) will send signal to child (PID : %d)\n", getpid(), pid);

        sleep(2);

        if(kill(pid, SIGUSR1) == 0) {
            printf("SIGUSR1 signal is send successfully !\n");
        }
        else {
            perror("SIGUSR1 signal is not send successfully !\n");
        }

        wait(NULL);
    }
}