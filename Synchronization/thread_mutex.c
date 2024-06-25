#include <stdlib.h>
#include <pthread.h>

static int counter = 0;
static pthread_mutex_t mutex;

void *thread_fn(void *arg)
{
	int id = (int)arg;
	int s;
	while (1)
	{
		//TODO 2: Protect the counter
		counter++;
		printf("Job %d started by thread %d\n", counter, id);
    	s = 1 + (int)((1.0 * rand() / RAND_MAX) * 2);
    	sleep(s);
		printf("Job %d finished by thread %d\n", counter, id);
    	sleep(s);
	}
}

int main()
{
	int i, rc; 
    pthread_t threads[3];

	//TODO 1: Initialize the mutex

	for (i = 0; i < 3; i++)
	{
		pthread_create(&threads[i], NULL, &thread_fn, (void *)(i + 1));
	}

    /* Wait for all threads to complete */
    for (i = 0; i < 3; i++)
    {
        pthread_join(threads[i], NULL);
    }
	//TODO 3: Deallocate the mutex

    return 0;
}
