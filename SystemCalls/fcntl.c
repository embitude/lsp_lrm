#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	char *file;
	int fd;
	struct flock lock;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return 1;
	}
	file = argv[1];
	printf("Opening %s\n", file);
	//TODO: Open the File for read write
	
	printf("\nLocking ... ");
	//TODO: Zero out the 'lock' and initialize the various fields to lock the 
	//Entire file
	//TODO: Invoke fcntl to lock the file

	printf("Done. Hit <Enter> to unlock ...\n");
	getchar();
	printf("Unlocking ... ");
	//TODO: Invoke fcntl to unlock the file
	printf("Done.\n");

	close(fd);
	return 0;
}
