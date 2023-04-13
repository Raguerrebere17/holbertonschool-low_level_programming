#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * @filename: The name of the text file
 * @letters: Quantity of letters
 * Return: The number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int count, fnd;
	char *a;

	if (!*filename)
		return (0);
	fnd = open(filename, O_RDONLY);
	if (fnd == -1)
		return (0);
	a = malloc(letters);
	if (a == NULL)
		return (0);
	read(fnd, a, letters);
	for (count = 0; *(a + count); count++)
		;
	write(STDOUT_FILENO, a, count);
	close(fnd);
	return (count);

}
