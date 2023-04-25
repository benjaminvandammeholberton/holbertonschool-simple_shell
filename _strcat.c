/**
 * *_strcat -function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @src: source
 * @dest: destination
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;
	char *pointeur = dest;

	for (i = 0 ; dest[i] != '\0' ; i++)
		n++;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i + n] = src[i];
	dest[i + n] = '\0';
	return (pointeur);
}
