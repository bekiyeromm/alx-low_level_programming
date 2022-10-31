#include "main.h"
/**
 * create_file - creates a file
 * @filename: The name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file1, i = 0, WR;/*wr is read write variable*/

	file1 = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file1 == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		WR = write(file1, text_content, i);
		if (WR == -1)
			return (-1);
	}
	close(file1);
	return (1);
}
