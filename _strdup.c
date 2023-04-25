#include "hsh.h"

/**
* char *_strdup - function that returns a pointer to a
* newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: pointer on the string that have to be duplicated
* Return: a pointer to the duplicated string.
* NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
    	size_t len;
    	char *strDuplicate;
	size_t i;

    	if (str == NULL)
        	return NULL;

    	len = _strlen(str);
    	strDuplicate = malloc(len + 1);

    	if (strDuplicate == NULL)
        	return NULL;

    	for (i = 0; i < len; i++)
        	strDuplicate[i] = str[i];
    	strDuplicate[len] = '\0';

    	return strDuplicate;
}
