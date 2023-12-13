#include "mshell.h"

void tokenize_input(char *prompt_command, char *arguments[]){
	int a = 0;
	char *tokenize = strtok(prompt_command, " ");

	while (tokenize != NULL && a < MAX_ARGS -1) {
		arguments[a++] = tokenize;
		tokenize = strtok(NULL, " ");
	}
	arguments[a] = NULL;/*terminating the arguments list*/
}
