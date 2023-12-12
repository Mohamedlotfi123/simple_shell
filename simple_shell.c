#include "shell.h"
/**
 * main - UNIX command line interpreter
 * @argc : Number of argument
 * @argv : Arry of argument
 * @env : enviroment variables
 *
 * Return: integer
 */
int main(int argc, char *argv[], char *env[])
{
	char *buf = NULL, **arr;
	int i;
	(void)argc;

	while (10)
	{
		i = isatty(STDIN_FILENO);
		if (i)
		{
			ready_to_go();
		}
		buf = read_command(i);
		arr = tokenization(buf);
		if (arr == NULL)
		{
			return (-1);
		}
		execute(arr, argv[0], buf, env);
		free(buf);
		free(arr);
	}
	return (0);
}
