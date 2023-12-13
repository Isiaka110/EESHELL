#include "mshell.h"

void read_cmd(char *prompt_command, size_t prompt_size)
{
<<<<<<< HEAD
	if(fgets(prompt_command, prompt_size, stdin) == NULL)
=======
	if (fgets(prompt_command, prompt_size, stdin) == NULL)
>>>>>>> 3e79993a1feda3ec7bd949887a6c791c52c01e21
	{
		if (feof(stdin))
		{
			m_print("\n");
			exit(EXIT_SUCCESS);
<<<<<<< HEAD
		} else
=======
		}
		else
>>>>>>> 3e79993a1feda3ec7bd949887a6c791c52c01e21
		{
			m_print("error while reading input.");
			exit(EXIT_FAILURE);
		}
	}
<<<<<<< HEAD
	prompt_command[strcspn(prompt_command, "\n")] = '\0'; 
	/*help remove newline*/
=======
	prompt_command[strcpn(prompt_command, "\n")] = '\0';/*help me remove newline*/
>>>>>>> 3e79993a1feda3ec7bd949887a6c791c52c01e21
}
