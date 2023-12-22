#include "main.h"
/**
 * read_textfile - Function that reads text file and prints it standard output
 * @filename: A pointer to the text file
 * @letters: Actual number of letters it could read and print
 * Return: 0 when function fail or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *_buffer;
	ssize_t f_d;
	ssize_t result_w;
	ssize_t num_t;

	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
	return (0);
	_buffer = malloc(sizeof(char) * letters);
	num_t = read(f_d, _buffer, letters);
	result_w = write(STDOUT_FILENO, _buffer, num_t);
	free(_buffer);
	close(f_d);
	return (result_w);
}
