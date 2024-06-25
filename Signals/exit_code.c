// Try the various things and then echo $?
// > Ctrl + C
// > Ctrl + Z; bg
// > kill -BUS `pidof exit_code`
// > kill -ALRM `pidof exit_code`
// > kill -CHLD `pidof exit_code`
// > kill -CONT `pidof exit_code`
#include <stdlib.h>
#include <string.h>
#include <signal.h>

void return_handler(int sig_no)
{
}

int main()
{
	struct sigaction sigchld_action;

	/* Handle SIGCHLD, SIGCONT */
	memset(&sigchld_action, 0, sizeof(sigchld_action));
	sigchld_action.sa_handler = &return_handler;
	sigaction(SIGCHLD, &sigchld_action, NULL);
	sigaction(SIGCONT, &sigchld_action, NULL);

	pause();
	exit(23);
}
