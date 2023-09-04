#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print a
 * standard output
 * @filename: text file being read
 * @letters: number of letters to be read and prints
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tuf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	tuf = malloc(sizeof(char) * letters);
	r = read(fd, tuf, letters);
	w = write(STDOUT_FILENO, tuf, r);

	free(tuf);
	close(fd);
	return (w);
}

