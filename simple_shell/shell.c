#include "shell.h"
/**
 * main - Entry point for the shell
 *
 * Description:
 * This function is the main entry point for the shell program.
 * It initializes the shell prompt, processes user input, tokenizes it,
 * and executes commands in a loop until the shell exits.
 *
 * Return: 0 for successful execution.
 */
int main(int argc, char **argv)
{
	char *in;
	char **tokens;
	int state;
	
	/*declaring void variables*/
	(void)argc; (void)argv;

	
	if isatty(STDIN_FILENO)
	{
		instance();
		in = input();
		tokens = tokenizer(in);
		state = execute(tokens);

		free(in);
		free(tokens);
	}

	return (0);
}
