#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
