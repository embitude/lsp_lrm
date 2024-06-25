#include <errno.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char* argv[])
{
	char* path = argv[1];
	int rval;

	// TODO:  Check file existence
	if (rval == 0)
		printf ("%s exists\n", path);
	else 
	{
		if (errno == ENOENT)
			printf ("%s does not exist\n", path);
		else if (errno == EACCES)
			printf ("%s is not accessible\n", path);
		return 0;
	}
	// TODO:  Check read access
	if (rval == 0)
		printf ("%s is readable\n", path);
	else
		printf ("%s is not readable (access denied)\n", path);
	// TODO:  Check write access
	if (rval == 0)
		printf ("%s is writable\n", path);
	else if (errno == EACCES)
		printf ("%s is not writable (access denied)\n", path);
	else if (errno == EROFS)
		printf ("%s is not writable (read-only filesystem)\n", path);
	// TODO:  Check executable access
	if (rval == 0)
		printf ("%s is Executable\n", path);
	else if (errno == EACCES)
		printf ("%s is not Executable (access denied)\n", path);
	return 0;
}

