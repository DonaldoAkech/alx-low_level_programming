#include "main.h"

/**
 * print_binary - prints the binary representation of decimal
 *numbers
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int d, puppy = 0;
	unsigned long int dog;

	for (d = 63; d >= 0; d--)
	{
		dog = n >> d;

		if (dog & 1)
		{
			_putchar('1');
			puppy++;
		}
		else if (puppy)
			_putchar('0');
	}
	if (!puppy)
		_putchar('0');
}

