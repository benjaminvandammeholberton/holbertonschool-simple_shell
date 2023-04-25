#include "hsh.h"

/**
 * prompt - function that display a prompt and read what the user put.
 * @statut: statut number of the last executing child process
 * Return: A string that contains the user's command
 */

char *prompt(int statut)
{
	char *buffer = NULL;
	size_t len = 0;

	printf("$ ");
	if (getline(&buffer, &len, stdin) == -1)
	{
		free(buffer);
		if (EOF)
		{
			printf("exit\n");
			exit(statut);
		}
		else
		{
			printf("Error");
			exit(1);
		}
	}
	return (buffer);
}
