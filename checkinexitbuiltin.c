#include "hsh.h"

/**
 * checkinexitbuiltin - check if the input is exit
 * @input: input
 *
*/

void checkinexitbuiltin(char *input)
{
	if (_strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit_shell();
	}
}

/**
 * exit_shell - exit the shell
 *
*/

void exit_shell(void)
{
	exit(0);
}
