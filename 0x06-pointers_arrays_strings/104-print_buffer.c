#include "main.h"
#include <stdio.h>

/**
 * print_buffer - calls on the main function
 * @b: The buffer.
 * @size: size of buffer
 *
 * Return: Always 0
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	i = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf(" ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] > 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(" ");
			}
		}

		printf("\n");
	}
}
