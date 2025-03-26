#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

void pipeExtend() {
    int pipeid[2];
    char buffer[200];

    if(pipe(pipeid) == -1) {
        perror("pipe");
        exit(1);

    }

    pid_t pid = fork();

    if(pid < 0) {
        perror("fork");
        exit(1);
    }
    else if (pid == 0) {
        //child process - read end

        close(pipeid[1]);

        read(pipeid[1], buffer,sizeof(buffer));
        close(pipeid[0]);
        printf("Message received : %s\n",buffer);
        close(pipeid[0]);

        exit(0);
    }
    else {
        // Parent process - write end

        close[pipeid[0]];

        char* message = "Hello, I am Eranga Madhushan. BCS Student at University of Ruhuna, Sri Lanka";

        write(pipeid[1], message, strlen(message));
        close(pipe[1]);

        wait(NNULL);
    }
}

int main() {
    pipeExtend();

    return 0;
}