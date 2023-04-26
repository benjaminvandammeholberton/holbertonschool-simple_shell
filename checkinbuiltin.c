#include "hsh.h"

/**
 * checkinbuiltin - function thatt check if the input given is a builtin 
 * function and execute it if it does.
 * @input: input
 * Return: 0 if the function is executed 1 if not.
*/

int checkinbuiltin(char *input)
{
	int i, flag = 0;

	if (_strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit_shell();
	}

	if (_strcmp(input, "env\n") == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
		{
			printf("%s\n", environ[i]);
		}
		flag = 1;
	}
	free (input);
	if (flag == 1)
		return(0);
	return(1);
}

/**
 * exit_shell - exit the shell
 *
*/

void exit_shell(void)
{
	exit(0);
}
