#include "main.h"

/**
 * create_file - This code establishes a function to generate a file 
 * with designated content and access permissions while managing 
 * potential errors that may occur during the file creation and 
 * writing steps.
 * @filename: char
 * @text_content: char
 * Return: (-1 or 1)
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(open_file, text_content, count);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
