/**
 * _strcmp - function that compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 for success / difference between
 * the firsts non-matching characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
