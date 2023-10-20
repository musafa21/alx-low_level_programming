#include "main.h"

/**
 * print_number - calls the main function
 * @n: Function parameter
 *
 * Return: Always 0 after successful execution
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
	_putchar('-');
	n1 = -n;
	}

	if (n1 / 10 != 0)
	{
	print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
