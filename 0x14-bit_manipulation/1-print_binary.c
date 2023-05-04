#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j;
	int counter = 0;
	unsigned long int num;

	for (j = 63; j >= 0; j--)
	{
	num = n >> j;

		if (num & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
