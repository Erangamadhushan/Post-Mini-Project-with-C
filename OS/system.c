#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
	int cpid = fork();
	if ( cpid == 0) {
		exit(0);
		printf("\nThe child process\n");
		exit(0);
		//exit(0); //*1
		exit(-1); //*2
		
	}else {
		wait(0);
		/* wait() blocks the calling process until one of its child processess exits or a
		signal is received. After child process terminates, parent continues its execution
		after wait system call instruction. */
		
		printf("\nThe parent process:\n");
	}


return 0;
}
