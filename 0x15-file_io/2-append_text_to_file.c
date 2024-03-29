#include "main.h"

/**
 * append_text_to_file - This code defines a C function called
 * append_text_to_file, which is responsible for opening a file specified 
 * by filename and appending the content provided in text_content to 
 * that file.
 * @filename: char
 * @text_content: char
 * Return: (-1 or 1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, count);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
