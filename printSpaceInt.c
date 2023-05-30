#include "main.h"
/**
 * prins_int - To print int begining with space
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed
 */
int prins_int(va_list args, char *buf, unsigned int buff)
{
	int int_input;
	unsigned int int_in, int_temp, a, div;

	int_input = va_arg(args, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		buff = handlBuf(buf, '-', buff);
	}
	else
	{
		int_in = int_input;
		buff = handlBuf(buf, ' ', buff);
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
	return (a + 1);
}
