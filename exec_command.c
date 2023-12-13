#include "mshell.h"

void exec_command(const char *prompt_command) {
	pid_t c_pid = fork(); /*this is to create child process*/
	
	if (c_pid == -1) {
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (c_pid == 0) {
		/*
		 * all child process
		 */
		execlp(prompt_command, prompt_command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else {
		/*parent process*/
		wait(NULL);
	}
}
