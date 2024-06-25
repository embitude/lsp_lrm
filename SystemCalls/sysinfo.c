#include <linux/kernel.h>
//#include <linux/sys.h>
#include <stdio.h>
#include <sys/sysinfo.h>


int main() {
	const long minute = 60;
	const long hour = minute *60;
	const long day = hour * 24;
	const double megabyte = 1024 * 1024;
	struct sysinfo si;
	
	//TODO 1: Get the system info using sysinfo system call

	//TODO 2: Print the total up time
	//TODO 3: Print the total RAM in MB
	//TODO 4: Print the Free Ram 
	//TODO 5: Print the process count 
	return 0;
}
