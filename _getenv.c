#include "hsh.h"

/**
 * _getenv - function that searchs into the the list of environment variables
 * for a specific one.
 * @name: name of variable that will be search
 * Return: a string that contains the value part of the variable
 */
char *_getenv(const char *name)
{
	int i = 0;
	char *var = NULL;
	char *result = NULL;

	while (environ[i])
	{
		if (_strncmp(name, environ[i], _strlen(name)) == 0)
		{
			var = _strdup(environ[i]);
			while (*var != '=')
				var++;

			++var;
			result = _strdup(var);
			free(var - (_strlen(name) + 1));
			return (result);
		}
		i++;
	}

	return (NULL);
}
