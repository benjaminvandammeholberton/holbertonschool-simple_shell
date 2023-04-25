#include "hsh.h"

/**
 * main - function that runs the program Simple Shell
 * @ac: number of argument given when calling the program
 * @av: array of argument given when calling the program
 * Return: 0 on success
*/

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	if (isatty(STDIN_FILENO))
	{
		inter_shell();
		return (0);
	}
	noninter_shell();
	return (0);
}
