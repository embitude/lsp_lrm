#include <malloc.h>
#include <pthread.h>
#include <stdio.h>
#include <stdarg.h>

/* The key used to associate a log file pointer with each thread.  */
static pthread_key_t thread_log_key;

/* Write message to the log file for the current thread.  */
void read_from_thread(int thread_num)
{
	//TODO 4: Get the pointer to the allocated
	printf("The data from thread %d is %s\n", thread_num, data);
}
/* Close the log file pointer THREAD_LOG.  */
void free_data(void *arg)
{
	//TODO 5: Free up the allocated space
	printf("%s freeing\n", data);
	free(data);
}
void *thread_function(void *arg)
{
	int thread_num = (int)(long)(arg);
	char *data;
	int i;

	// TODO 2: Allocate the memory for 20 bytes and assign it to data
	// TODO 3: Store pointer to the allocated space in thread specific data area
	/* Do work here ... */
	for (i = 0; i < 2 * thread_num; i++)
	{
		read_from_thread(thread_num);
		sleep(5 / thread_num);
	}
	printf("%d: done\n", thread_num);
	return NULL;
}

int main()
{
	int i;
	pthread_t threads[5];

	// TODO 1: Create a key for thread specific data
	// Use free_data as cleanup handler

	/* Create threads to do the work */
	for (i = 0; i < 5; ++i)
		pthread_create(&(threads[i]), NULL, &thread_function, (void *)(long)(i + 1));
	/* Wait for all threads to finish. */
	for (i = 0; i < 5; ++i)
		pthread_join(threads[i], NULL);

	/* Delete the key */
	// TODO 6: Free up the thread specific key with pthread_key_delete

	return 0;
}
