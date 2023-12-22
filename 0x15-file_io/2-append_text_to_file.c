#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The terminated string to add to the end of the file.
 * Return: - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descript;
	size_t _length = 0;
	ssize_t byte_n;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
	return (1);
	file_descript = open(filename, O_WRONLY | O_APPEND);
	if (file_descript == -1)
	{
	perror("Error opening file");
	return (-1);
	}
	while (text_content[_length] != '\0')
	{
	_length++;
	}
	byte_n = write(file_descript, text_content, _length);
	if (byte_n == -1)
	{
	perror("Error writing to file");
	close(file_descript);
	return (-11);
	}
	if (close(file_descript) == -1)
	{
	perror("Error closing file");
	return (-1);
	}
	return (1);
}
