#include "mshell.h"

void tokenizer_input(char *prompt_command, char *arguments[])
{
	int a = 0;
	char *tokenizer = strtok(prompt_command, " ");

	while (tokenizer != NULL && a < MAX_ARGS - 1)
	{
		arguments[a++] = tokenizer;
		tokenizer = strtok(NULL, " ");
	}
	arguments[a] = NULL;/*terminating the arguments list*/
}
