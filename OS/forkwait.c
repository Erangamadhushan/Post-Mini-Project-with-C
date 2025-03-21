#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void child() {
	printf("======== CHILD ========\n");
	printf("My PID is %d and my parent PID is  %d.\n",getpid(), getppid());
}

void parent(int pid) {
	//*1
	printf("======== PARENT ==========\n");
	//*2
	printf("My PID is %d and I have a child with PID %d\n",getpid(),pid);
	//*3
}

void main() {
	int pid;
	pid = fork(); /* create new process */
	if(pid == 0) {
		child();
	}
	else if (pid > 0) {
		parent(pid);
	}
	else {
		perror("Fork returned error code ; no child\n");
	}
}
