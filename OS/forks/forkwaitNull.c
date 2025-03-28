#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void child() {
	printf("======== CHILD ========\n");
	printf("My PID is %d and my parent PID is  %d.\n",getpid(), getppid());
}

void parent(int pid) {
	//wait(NULL);
	printf("======== PARENT ==========\n");
	//wait(NULL);
	int w = wait(NULL); // return code (child pid) assign to w
	printf("My PID is %d and I have a child with PID %d\n",getpid(),pid);
	printf("Wait = %d\n", w);
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
