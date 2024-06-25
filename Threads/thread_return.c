#include <pthread.h>
#include <stdio.h>

struct fact_params
{
	int count;
};

void *fact(void *parameters)
{
	//TODO 2: Initialize p with arguments
	int i, factorial = 1;
	void *pp;

	if (p->count != 0)
	{
		for (i = 1; i <= p->count; i++)
			factorial = factorial * i;
	}
	//TODO 3: Assign the result to pp
	return pp;
}

int main()
{
	int n;
	void *p;
	pthread_t thread_id;
	struct fact_params thread_args;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	thread_args.count = n;

	//TODO 1: Create the thread with threads_args as argument
	
	//TODO 4: Get the return value from the thread
	printf("Factorial = %d\n", p);

	return 0;
}
