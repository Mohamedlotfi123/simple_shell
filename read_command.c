#include "shell.h"
/**
 * read_command - read command from the user
 * @i : 1 if shell in active mode or 0 if nonactive
 *
 * Return: Pointer to the command
 */
char *read_command(int i)
{
	ssize_t x;
	char *buf = NULL;
	size_t n;

	x = getline(&buf, &n, stdin);
	if (x == -1)
	{
		if (i)
			write(1, "\n", 1);
		free(buf);
		exit(0);
	}
	return (buf);
}
