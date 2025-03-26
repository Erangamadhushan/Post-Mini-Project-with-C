#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>

void basicPipe() {
    int pipeid[2];
    char buffer[100];

    if(pipe(pipeid) == -1) {
        perror("pipe");
        exit(1);
    }

    pid_t pid = fork();

    if(pid < 0) {
        perror("fork");
        error(1);
    }
    else if(pid == 0) {
        //Child process - read end

        close(pipeid[1]);

        read(pipeid[0],buffer,sizeof(buffer));
        close(pipeid[0]);
        printf("Message received :%s\n",buffer);
        printf("Child PID : %d\n", getpid());
    }

    else {
        //Parent process - write end

        close(pipeid[0]);
        char* message = "Hello, Iam Eranga Madhushan Samaraweera";
        write(pipeid[1], message,strlen(message));
        close(pipeid[1]);
        printf("Parent PID : %d\n", getpid());

        //wait(NULL); // wait for child finished !
    }
}