#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 * Return: always 0
 */

void puts2(char *str)
{
	if (str != 0)
	{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
	}
}

