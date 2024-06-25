#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

sig_atomic_t sigcount = 0;

void handler(int sigint)
{
	sigcount++;
}

int main()
{
	int i;
	struct sigaction sa;
	sigset_t mask, oldmask;

	//TODO 1: Nullify the sigaction data structure, 
	// and register the handler 
	
	for(i = 0; i < 20; i++)
	{
		if (i == 2)
		{
			//TODO 2: Mask the SIGINT with following steps
			// Clear the mask with sigemptyset, add SIGINT with sigaddset and finally
			// mask it using sigprocmask. Make sure to get the previous mask in oldmask
		}
		if (i == 10)
		{
			//TODO 3: Restore the mask with sigprocmask
		}
			
		printf("Hmmmmm sigatomic = %d\n", sigcount);
		sleep(1);
	}
	return 0;
}
