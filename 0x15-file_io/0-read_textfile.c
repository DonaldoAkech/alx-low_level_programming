#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this Read text file print to STDOUT.
 * @filename: file being read
 * @letters: letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pointer;
	ssize_t dp;
	ssize_t y;
	ssize_t t;

	dp = open(filename, O_RDONLY);
	if (dp == -1)
		return (0);
	pointer = malloc(sizeof(char) * letters);
	t = read(dp, pointer, letters);
	y = write(STDOUT_FILENO, pointer, t);

	free(pointer);
	close(dp);
	return (y);
}

