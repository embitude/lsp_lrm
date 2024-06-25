#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int i;
	//TODO 1: Declare the variable of type struct sigaction
	//TODO 2: Nullify the variable
	//TODO 3: Register the handler
	
	for(i = 0; i < 20; i++)
	{
		printf("Hmmmmm\n");
		sleep(1);
	}
	return 0;
}
