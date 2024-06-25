#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>

int main() {

	struct rlimit r1;

	//TODO 1: Get the current cpu limit with getrlimit
	printf("Current limit is %u\n", r1.rlim_cur);
	//TODO 2: set the current limit to 1 sec with setrlimit
	while (1);
	return 0;
}

