#include "shell.h"
/**
 * execute - execute the command
 * @arr : array of pointers
 * @argv : first argument
 * @buf : command
 * @env : enviroment variables
 *
 * Return: Integer
 */
void execute(char **arr, char *argv, char *buf, char *env[]);
void execute(char **arr, char *argv, char *buf, char *env[])
{
	int i, y, x = 0, s, b = 0;
	pid_t id;
	char z[20] = "/bin/";

	while (arr[x] != NULL)
	{
		if (strcmp(arr[x], "exit") == 0)
		{
			b_in_exit(arr, buf);
			b += 1;
		}
		if (strcmp(arr[x], "env") == 0)
		{
			b_in_env(env);
			b += 1;
		}
		x++;
	}
	y = search_command(arr[0]);
	if (y == -1)
	{
		error(argv, buf);
		b++;
	}
	if ((y == 0 || y == 1) && b == 0)
	{
		id = fork();
		if (id == 0)
		{
			if (y == 0)
			{
				arr[0] = strcat(z, arr[0]);
			}
			i = execve(arr[0], arr, env);
			if (i == -1)
			{
				exit(126);
			}
			exit(0);
		}
		else
		{
			waitpid(id, &s, WUNTRACED);
		}
	}
}
