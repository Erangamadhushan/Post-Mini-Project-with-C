#include <stdio.h>
#include <unistd.h>


int main() {
	/* Every process can be identify by using the identifier called pid */
	//getpid(); returns the process ID of the parent process
	//getpid(); returns the process id of the calling process.
	printf("Just one process so far\n");
	printf("My process ID (pid) is %d\n", getpid());
	printf("My parent process ID is (ppid) is %d\n", getppid());


return 0;
}
