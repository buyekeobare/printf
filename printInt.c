#include "main.h"

/**
 * printInt - To prints an integer.
 * @args: input string.
 * @buf: buffer pointer.
 * @buff: index for buffer pointer.
 * Return: Number of chars printed.
 */
int printInt(va_list args, char *buf, unsigned int buff)
{
	int int_input;
	unsigned int int_in, int_temp, i, div, isneg;

	int_input = va_arg(args, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		buff = handlBuf(buf, '-', buff);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		buff = handlBuf(buf, ((int_in / div) % 10) + '0', buff);
	}
	return (i + isneg);
}
