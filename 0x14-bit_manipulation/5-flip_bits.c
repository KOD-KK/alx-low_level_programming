#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	int counter = 0;
	unsigned long int num;
	unsigned long int new = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		num = new >> i;
		if (num & 1)
			counter++;
	}

	return (counter);
}
