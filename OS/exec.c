#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
	printf(" ==== MAIN ====\n");
	printf("Now a I'm calling exec family of system calls\n");
	//execlp("ls", "", NULL); //*1
	//execlp("", "ls", NULL);
	//execlp("ls", "ls", NULL);
	//execlp("forkpid", "", NULL);
	//execlp("ls", "ls", "-l" ,NULL);
	execlp("forkwaitexit", "", NULL); // </../forkloop> is the executable code with full path
	printf("==== END ====\n");


return 0;
}
