#include <stdio.h>

/**
 *main - prints lowercase alphabet
 *
 * Return: Always 0 after successful execution
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
