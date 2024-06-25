#include <stdlib.h>
#include <pthread.h>

struct foo {
	int             f_count;
	pthread_mutex_t f_lock;
	int             f_id;
};

struct foo *fp;

struct foo *foo_alloc(int id) /* allocate the object */
{
	struct foo *fp;

	if ((fp = malloc(sizeof(struct foo))) != NULL) {
		fp->f_count = 0;
		fp->f_id = id;
		//TODO 1: Initialize the mutex
	}
	return(fp);
}

void foo_hold(struct foo *fp, int id) /* add a reference to the object */
{
	//TODO 2: Synchronize the access to fp
	fp->f_count++;
	printf("Thread %d got the hold and count is %d\n", id, fp->f_count);
}

void foo_rele(struct foo *fp, int id) /* release a reference to the object */
{
	//TODO 3: Synchronize the access to fp. 
    // Deallocate the resource and destroy the mutex if reference count is 0
	fp->f_count--;
	printf("Thread %d release the resource and count is %d\n", id, fp->f_count);
	if (fp->f_count == 0) { /* last reference */
		printf("Dellocating the resource\n");
		free(fp);
	} else {
	}
}

void *thread_fn(void *arg)
{
	int id = (int)arg;
	int s;
	foo_hold(fp, id);
    s = 1 + (int)((1.0 * rand() / RAND_MAX) * 2);
    sleep(s);
	foo_rele(fp, id);
}

int main()
{
	int i, rc; 
    pthread_t threads[3];

    /* Initialize mutex and condition variable objects */
	fp = foo_alloc(0);

	for (i = 0; i < 3; i++)
	{
		pthread_create(&threads[i], NULL, &thread_fn, (void *)(i + 1));
	}

    /* Wait for all threads to complete */
    for (i = 0; i < 3; i++)
    {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
