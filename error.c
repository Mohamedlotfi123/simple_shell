#include "shell.h"
/**
 * error - create the error message
 * @argv : name of the file
 * @buf : command entered
 *
 * Return: error message
 */
void error(char *argv, char *buf)
{
	write(2, argv, _strlen(argv));
	write(2, ": 1: ", 5);
	write(2, buf, _strlen(buf));
	write(2, ": not found\n", 12);
}
