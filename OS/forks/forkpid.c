#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int pid;
	//printf("Just one process so far\n");
	//printf("calling fork...\n");
	pid = fork(); /* create new process */
	if(pid == 0) {
		printf("I am the child my pid is :%d\n",getpid());
		printf("I parent id : %d\n",getppid());
	}
	else if (pid > 0) {
		wait(0);
		printf("I am the parent my pid is %d. Child has pid : %d\n", getpid(),pid);
		printf("My parent id :%d\n",getppid());
		
	}
	else {
		printf("Fork returned error code : no child\n");
	}
	



return 0;
}
