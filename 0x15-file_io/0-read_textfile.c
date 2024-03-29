#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- the Read text file print to a STDOUT.
 * @filename: a text file being read
 * @letters: the num of letters to be read
 * Return: w- actual num of a bytes to read and printed
 *        0 when a function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
