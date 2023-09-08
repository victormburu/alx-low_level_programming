#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: input value
 * @letters: input value
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fa, w, t;

	fa = open(filename, O_RDONLY);
	if (fa == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fa, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fa);
	return (w);
}
