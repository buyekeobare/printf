#include "main.h"
/**
 * printHex - To prints a decimal in hexadecimal
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: number of chars printed
 */
int printHex(va_list args, char *buf, unsigned int buff)
{
	int int_in, a, is_neg, count, first_d;
	char *hex, *bi;

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
	hex = malloc(sizeof(char) * (8 + 1));
	hex = fillHexArr(bi, hex, 0, 8);
	for (first_d = a = count = 0; hex[a]; a++)
	{
		if (hex[a] != '0' && first_d == 0)
			first_d = 1;
		if (first_d)
		{
			buff = handlBuf(buf, hex[a], buff);
			count++;
		}
	}
	free(bi);
	free(hex);
	return (count);
}
