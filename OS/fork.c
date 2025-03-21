#include <stdio.h>
#include <unistd.h>

/* Fork system call use for creates a new process, which is called child process, which runs concurrently
process is called parent process */

int main() {
	//make two process which run same program after fork()
	fork();
	fork();
	printf("Hello World 1\n");
	printf("Hello World 2\n");
	printf("%d\n",getpid());
	
return 0;
}
