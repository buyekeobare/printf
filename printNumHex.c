#include "main.h"
/**
 * printtt_hex - To print number in hex begining with zero.
 * @args: Input string.
 * @buf: Buffer pointer.
 * @buff: Index for buffer pointer.
 * Return: Number of chars printed.
 */
int printtt_hex(va_list args, char *buf, unsigned int buff)
{
	int int_input, a, is_neg, count, first_digit;
	char *hexadecimal, *bi;

	int_input = va_arg(args, int);
	is_neg = 0;
	if (int_input == 0)
	{
		buff = handlBuf(buf, '0', buff);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		is_neg = 1;
	}
	buff = handlBuf(buf, '0', buff);
	buff = handlBuf(buf, 'x', buff);
	bi = malloc(sizeof(char) * (32 + 1));
	bi = fillBinaryArr(bi, int_input, is_neg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = fillHexArr(bi, hexadecimal, 0, 8);
	for (first_digit = a = count = 0; hexadecimal[a]; a++)
	{
		if (hexadecimal[a] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buff = handlBuf(buf, hexadecimal[a], buff);
			count++;
		}
	}
	free(bi);
	free(hexadecimal);
	return (count + 2);
}
