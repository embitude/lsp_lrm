#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t child_pid;

	child_pid = fork();
	return 0;
}
