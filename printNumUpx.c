#include "main.h"
/**
 * printtt_upx - To prints number in uppercase hex
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed
 */
int printtt_upx(va_list args, char *buf, unsigned int buff)
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
	buff = handlBuf(buf, 'X', buff);
	bi = malloc(sizeof(char) * (32 + 1));
	bi = fillBinaryArray(bi, int_input, is_neg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = fillHexArray(bi, hexadecimal, 1, 8);
	for (first_digit = a = count = 0; hexadecimal[a]; a++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
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
