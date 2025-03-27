#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>

void dup2Example() {
    //Redirecting stdout to file
    int stdout_copy = dup(STDOUT_FILENO);

    //Save Original stdout

    int file_fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(file_fd == -1) {
        perror("Error opening file\n");
        return;
    }

    //Redirect stdout to file
    if(dup2(file_fd, STDOUT_FILENO) == -1) {
        perror("Error duplicating stdout\n");
        close(file_fd);
        return;
    }

    //Now printf will write to the file instead of console

    printf("This is written to file\n");

    printf("Another line in the redirected output\n");

    //Restore stdout
    dup2(stdout_copy,STDOUT_FILENO);
    close(file_fd);
    close(stdout_copy);

    printf("dup2() example worked successfully !");
}