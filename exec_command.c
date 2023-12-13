#include "mshell.h"
/*
 *
 */
void exec_command(const char *prompt_command, char *arguments[]i)
{
	pid_t c_pid = fork(); /*this is to create child process*/

	if (c_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (c_pid == 0)
	{
		/*
		 * all child process continues
		 */
		/**execlp(prompt_command, prompt_command, (char *)NULL);**/
		execvp(prompt_command, arguments);
		perror("Command Execution failed");
		exit(EXIT_FAILURE);
	} else
	{
		/*
		 * parent process pauses a little and continues shortly
		 * after the child process is completed
		*/
		wait(NULL);
	}
}
