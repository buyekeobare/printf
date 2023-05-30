#include "main.h"
/**
 * printUnt - To print an unsigned int
 * @args: Number to print
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed.
 */
int printUnt(va_list args, char *buf, unsigned int buff)
{
	unsigned int int_in, int_temp, a, div;

	int_in = va_arg(args, unsigned int);
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (a = 0; div > 0; div /= 10, a++)
	{
		buff = handlBuf(buf, ((int_in / div) % 10) + '0', buff);
	}
	return (a);
}
