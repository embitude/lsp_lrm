#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

sig_atomic_t sigintcnt = 0;

void handler(int signum)
{
	++sigintcnt;
	if (signum == SIGUSR1)
	{
		printf("Sleeping ...\n");
		sleep(10);
		printf("Done\n");
	}
}

int main()
{
	struct sigaction sa;

	//TODO 1: Register the same signal handler for SIGINT
	//TODO 2: Mask the SIGINT during the SIGUSR1 handler. Use sigaddset for the same.
	//TODO 3: Register the same handler as SIGINT for SIGUSR1

	for(;;)
	{
		printf("Signal Count: %d\n", (int)sigintcnt);	
		sleep(5); // Would return when signalled
	}
	return 0;
}
