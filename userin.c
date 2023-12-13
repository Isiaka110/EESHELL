#include "mshell.h"

void read_cmd(char *prompt_command, size_t prompt_size) {
	if(fgets(prompt_command, prompt_size, stdin) == NULL){
		if (feof(stdin)) {
			m_print("\n");
			exit(EXIT_SUCCESS);
		}else {
			m_print("error while reading input.");
			exit(EXIT_FAILURE);
		}
	}
	prompt_command[strcspn(prompt_command, "\n")] = '\0'; /*helps me remove newline*/
}
