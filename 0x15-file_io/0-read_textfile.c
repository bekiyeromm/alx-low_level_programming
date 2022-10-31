#include "main.h"
/**
 * read_textfile - Reads a text file and prints it
 * @filename: The name of the file.
 * @letters: The number of letters to read and print
 * Return: Returns the actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file1, file2;
	size_t readed;
	char *buffer = malloc(sizeof(char) * letters);
	
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	
	file1 = open(filename, O_RDONLY, 0600);
	if (file1 == -1)
	{
		close(file1);
		return (0);
	}
	readed = read(file1, buffer, letters);
	buffer[letters] = '\0';
	close(file1);
	
	file2 = write(STDOUT_FILENO, buffer, readed);
	if (file2 == -1)
		return (0);
	return (file2);
}
