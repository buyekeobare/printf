#include "main.h"
/**
 * printt_int - To print a short integer
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed.
 */
int printt_int(va_list args, char *buf, unsigned int buff)
{
	short int int_input;
	unsigned short int int_in, int_temp, a, div, is_neg;

	int_input = va_arg(args, int);
	is_neg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		buff = handlBuf(buf, '-', buff);
		is_neg = 1;
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
	for (a = 0; div > 0; div /= 10, a++)
	{
		buff = handlBuf(buf, ((int_in / div) % 10) + '0', buff);
	}
	return (a + is_neg);
}
