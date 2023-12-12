#include "shell.h"
/**
 * b_in_exit - exit function
 * @arr : argument array
 *
 * Return: Void
 */
void b_in_exit(char **arr)
{
	int x;

	if (arr[1] == NULL)
		exit(0);
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
