#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t child_pid;

	printf("The main program process id is %d\n", (int)getpid());
	//TODO 1: Invoke the fork and get the return value in child_pid
	//TODO 2: Display the parent, self and child process id in parent process
	//TODO 3: Display the self and parent process id in the child process
	return 0;
}
