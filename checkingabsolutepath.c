#include "hsh.h"

/**
 * checkingabsolutepath - function that check if the
 * given string is a absolute path to a program
 * @str: pointer to the string that has to be checked
 * Return: pointer to the argument string if
 * success, NULL otherwise
 */
char *checkingabsolutepath(char *str)
{
	struct stat st;

	if (stat(str, &st) == 0)
		return (str);

	return (NULL);
}
