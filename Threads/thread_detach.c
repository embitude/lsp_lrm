#include <stdio.h>
#include <pthread.h>

void* thread_function(void* thread_arg)
{
	int i = 10;

	/* Do work here... */
	while (i--)
	{
		printf("Thread Working\n");
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_attr_t attr;
	pthread_t thread;

	//TODO 1: Initialize the attribute object
	pthread_attr_init(&attr);
	//TODO 2: Modify attribute to set the state to PTHREAD_CREATE_DETACHED
	//TODO 3: Create the thread with above attribute
	//TODO 4: De-Initialize the attribute object
	/* Do work here... */
	while (1)
	{
		printf("Process Working\n");
		sleep(2);
	}
	return 0;
}
