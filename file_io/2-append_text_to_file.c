#include "main.h"
/**
 * append_text_to_file - Write at the end of the file
 * @filename: The name of the file
 * @text_content: The content of the text
 * Return: 1 On success, -1 on Failure
 */

int append_text_to_file(const char *filename, char text_content)
{
	int fnd, count;

	if (filename == NULL || !*filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fnd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; *(text_content + count); count++)
			;
		write(fnd, text_content, count);
	}
	close(fnd);
	return (1);
}
