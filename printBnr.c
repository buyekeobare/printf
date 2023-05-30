#include "main.h"

/**
 * printBnr - To prints decimal in binary
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed.
 */
int printBnr(va_list args, char *buf, unsigned int buff)
{
	int int_in, count, a, first_one, is_neg;
	char *bi;

	int_in = va_arg(args, int);
	is_neg = 0;
	if (int_in == 0)
	{
		buff = handlBuf(buf, '0', buff);
		return (1);
	}
	if (int_in < 0)
	{
		int_in = (int_in * -1) - 1;
		is_neg = 1;
	}
	bi = malloc(sizeof(char) * (32 + 1));
	bi = fillBinaryArr(bi, int_in, is_neg, 32);
	first_one = 0;
	for (count = a = 0; bi[a]; a++)
	{
		if (first_one == 0 && bi[a] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			buff = handlBuf(buf, bi[a], buff);
			count++;
		}
	}
	free(bi);
	return (count);
}
