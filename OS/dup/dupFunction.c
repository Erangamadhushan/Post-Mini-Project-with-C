#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>


void dupFunction() {

    int original_fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(original_fd == -1) {
        perror("Error Opening file\n");
        return;
    }

    // Duplicate the file
    int duplicate_fd = dup(original_fd);

    if(duplicate_fd == -1) {
        perror("Error duplicating file descriptr\n");
        close(original_fd);
        return;
    }

    // Write to both file descriptors

    char* msg1 = "This is written through original descriptor\n";
    char* msg2 = "This is written through duplicated descriptor\n";

    write(original_fd, msg1, strlen(msg1));
    write(duplicated_fd, msg2, strlen(msg2));

    close(original_fd);
    close(duplicate_fd);

    printf("dup() example is worked successfully !\n")
}

int main() {
    dupFunction();

    return 0;
}