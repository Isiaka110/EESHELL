#include "mshell.h"

int main(void) {
	char prompt_command[128];

	while (1) {
		print_prompt();
		read_cmd(prompt_command, sizeof(prompt_command));
		if (strcmp(prompt_command, "exit") == 0){
			break;
		}
		exec_command(prompt_command);	
	}
	return 0;
}
