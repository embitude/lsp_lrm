#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int ret;
	// TODO 1: Declare the argument list for "ls -l /"
    // TODO 2: Create the process with fork
	if (ret == 0)
	{
    	// TODO 3: Invoke execv in the child process with above argument list
		printf("\nThis will not print, if all ok\n");
	}

    return 0;
}
