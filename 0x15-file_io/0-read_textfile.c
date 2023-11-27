#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int s, t;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	s = read(file_descriptor, buffer, letters);
	if (s < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[s] = '\0';

	close(file_descriptor);

	t = write(STDOUT_FILENO, buffer, s);
	if (t < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (t);
}
