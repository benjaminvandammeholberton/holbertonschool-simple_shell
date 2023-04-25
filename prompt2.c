#include "hsh.h"

/**
 * prompt - function that display a prompt and read what the user put.
 * @statut: statut number of the last executing child process
 * Return: A string that contains the user's command
 */

char *prompt2(int statut)
{
	char *buffer = NULL;
	size_t len = 0;
	int i = 0, count = 0;

	if (getline(&buffer, &len, stdin) == -1)
	{
		free(buffer);
		if (EOF)
		{
			exit(statut);
		}
		else
		{
			printf("Error");
			exit(1);
		}
	}
	while(buffer[i] != '\n')
	{
		if (buffer[i] == 32)
			count++;
		i++; 
	}
	
	if ((_strlen(buffer) - 1) == count)
		exit(0);
	return (buffer);
}
