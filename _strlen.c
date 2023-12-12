#include "shell.h"
/**
 * _strlen - length of the string
 * @str : pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
