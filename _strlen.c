#include "hsh.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable that containt a string
 * Return: the number of caracter that composed the string s
*/

int _strlen(const char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0')
	{
		n = n + 1;
		i++;
	}
	return (n);
}
