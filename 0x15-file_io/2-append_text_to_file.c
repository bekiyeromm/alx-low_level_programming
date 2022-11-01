#include "main.h"
/**
 * append_text_to_file - appends text at end of a file.
 * @filename: The name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file1, WR, i = 0;

	if (filename == NULL)
		return (-1);
	file1 = open(filename, O_WRONLY | O_APPEND);
	if (file1 == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		WR = write(file1, text_content, i);
	}
	close(file1);
	if (WR == -1)
		return (-1);
	return (1);
}
