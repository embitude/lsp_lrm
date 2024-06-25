#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int main() {
	struct timeval tv;
	struct tm* ptm;
	char time_string[40];
	long milliseconds;

	//TODO 1: Populate the timeval structure with gettimeofday
	//TODO 2: Use localtime to get struct tm
	//TODO 3: Use strftime to get the time in desired format
	milliseconds = tv.tv_usec / 1000;
	printf("%s.%03ld\n", time_string, milliseconds);
	return 0;
}
