#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - write an the end of the file.
 *
 * @filename: the name of the textfile.
 * @text_content: content of text.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fnd, cont;

	if (filename == NULL || !*filename)
	{
		return (-1);
	}
	fnd = open(filename, O_RDWR | O_APPEND);
	if (fnd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (cont = 0; *(text_content + cont); cont++)
		;
		write(fnd, text_content, cont);
	}
	close(fnd);
	return (1);
}
