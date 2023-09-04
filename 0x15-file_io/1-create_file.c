#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A name of the file to create.
 * @text_content: A string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int dp, x, buf = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (buf = 0; text_content[buf];)
			buf++;
	}

	dp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(dp, text_content, buf);

	if (dp == -1 || x == -1)
		return (-1);

	close(dp);

	return (1);
}

