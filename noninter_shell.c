#include "hsh.h"

/**
 * noninter_shell - function that runs the Simple Shell in interactive mode
 * Return: 0 on success
 */

int noninter_shell(void)
{
	char *buffer = NULL;
	int id = 0;
	char **args = NULL;
	char *path = NULL;
	int flag = 0;
	int statut = 0;

	while (1)
	{
		buffer = prompt2(statut);
		if (_strcmp(buffer, "\n") == 0)
		{
			free(buffer);
			exit(0);
		}
		args = tokenize(buffer, " \n");
		path = checkingabsolutepath(args[0]);
		if (path)
			flag = 1;
		if (path == NULL)
			path = checkingpath(args[0]);
		if (path == NULL)
		{
			fprintf(stderr, "./hsh: 1: %s: not found\n", args[0]);
			free(args);
			free(buffer);
			exit(127);
		}
		if ((id = fork()) == -1)
			exit(1);
		if (id == 0)
		{
			if ((execve(path, args, environ)) == -1)
				exit(1);
		}
		wait(&statut);
		free(args);
		if (flag == 0)
			free(path);
		free(buffer);
	}
}
