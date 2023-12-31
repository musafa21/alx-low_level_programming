#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to split
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = 0, mid;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 1)
	{
		mid = (length - 1) / 2;
		mid += 1;
	}
	else
	{
		mid = length / 2;
	}

	while (mid < length)
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}
