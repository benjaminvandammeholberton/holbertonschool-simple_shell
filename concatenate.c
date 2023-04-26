#include "hsh.h"

/**
 * concatenate - function that concatenate three
 * strings
 * @str1: pointer to the first string that will be the beginning of the new
 * string.
 * @str2: pointer to the second string that will be the middle of the new
 * string.
 * @str3: pointer to the third string that will be the end of the new string.
 * Return: the concatenate string, NULL if malloc failed
 */
char *concatenate(char *str1, char *str2, char *str3)
{
	char *strc;
	int size;

	size = _strlen(str1) + _strlen(str2) + _strlen(str3) + 1;

	strc = malloc(sizeof(char) * size);
	if (strc == NULL)
		return (NULL);

	if (strc == NULL)
	{
		printf("Erreur");
		return (NULL);
	}

	_strcpy(strc, str1);
	_strcat(strc, str2);
	_strcat(strc, str3);

	return (strc);
}
