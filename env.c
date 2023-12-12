#include "shell.h"
/**
 * b_in_env - print enviroment variables
 * @env : array of the enviroment variables
 *
 * Return: Void
 */
void b_in_env(char **env)
{
	int i = 0;

	while (env[i] != NULL)
	{
		write(1, env[i], _strlen(env[i]));
		write(1, "\n", 1);
		i++;
	}
}
