#include "shell.h"
/**
 * b_in_exit - exit function
 * @arr : argument array
 * @buf : buffer
 *
 * Return: Void
 */
void b_in_exit(char **arr, char *buf)
{
	int x;

	if (arr[1] == NULL)
	{
		free(buf);
		free(arr);
		exit(EXIT_SUCCESS);
	}
	else
	{
		x = atoi(arr[1]);
		if (x < 0)
		{
			error("./hsh", arr[1]);
			exit(2);
		}
		if (x == 0)
		{
			error("./hsh", arr[1]);
			exit(2);
		}
		else
			exit(x);
	}
}
