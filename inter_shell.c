#include "hsh.h"

/**
 * inter_shell - function that runs the Simple Shell in interactive mode
 * Return: 0 on success
 */

int inter_shell(void)
{
	char *input = NULL, *command = NULL;
	char **args = NULL;
	int flag = 0, statut = 0, id = 0;

	while (1)
	{
		free(input);
		flag = 0;
		input = prompt(statut);
		if (_strcmp(input, "\n") == 0)
			continue;
		args = tokenize(input, " \n");
		command = checkingdirectory(args[0]);
		if (command)
			flag = 1;
		if (command == NULL)
			command = checkingpath(args[0]);
		if (command == NULL)
		{
			fprintf(stderr, "hsh: %s: command not found\n", args[0]);
			free(args);
			statut = 127;
			continue;
		}
		id = fork();
		if (id == -1)
			exit(1);
		if (id == 0)
		{
			if (execve(command, args, environ) == -1)
				exit(1);
		}
		wait(&statut);
		free(args);
		if (flag == 0)
			free(command);
	}
}
