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
	char *env_var = NULL;
        char *result = NULL;

	while (environ[i])
	{
		if (_strncmp(name, environ[i], strlen(name)) == 0)
		{
			env_var = strdup(environ[i]);
			while (*env_var != '=')
				env_var++;

			++env_var;
                        result = strdup(env_var);
                        free(env_var - (strlen(name) + 1));
			return (result);
		}
		i++;
	}

	return (NULL);
}
