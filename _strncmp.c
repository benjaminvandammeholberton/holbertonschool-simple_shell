#include "hsh.h"

/**
 * _strncmp - function that compare n first characters of a string wiht anoteere
 * @str1: Pointer to the first string
 * @str2: Pointer to the second string
 * @n: number of characters to compare
 * Return: 0 if the strings are equal, 1 otherwise
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
        size_t i;
        for (i = 0; i < n && s1[i] == s2[i] && s1[i] != '\0'; i++);
        if (i == n)
                return (0);
        else 
                return (1);
}
