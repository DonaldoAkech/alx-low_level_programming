#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print all the alpahbet in lowercase
 *Return: void
 */
void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)

		_putchar(b);

	_putchar('\n');

}
