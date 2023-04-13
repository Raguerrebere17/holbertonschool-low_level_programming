#include "main.h"
/**
 * create_file - create a file with the content.
 * @filename: Name of the file.
 * @text_content: Content given to the new file
 * Return: On success returns 1, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fnd, count;

	if (!*filename)
		return (-1);
	fnd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fnd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (count = 0; text_content[count]; count++)
		;
	if (count != 0)
		write(fnd, text_content, count);
	close(fnd);
	return (1);
}
