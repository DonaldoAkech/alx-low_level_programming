#include "main.h"

/**
 * flip_bits - numbers the number of bits to flips
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, sort = 0;
	unsigned long int inclusive;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		inclusive = exclusive >> b;
		if (inclusive & 1)
			sort++;
	}

	return (sort);
}

