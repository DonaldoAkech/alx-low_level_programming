#include "main.h"

/**
 * get_endianness - checks if the computer is big or little
 * Return: 0 if it's big, 1 if it's little
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *q = (char *) &p;

	return (*q);
}

