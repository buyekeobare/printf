#include "main.h"
/**
 * printt_hex - To print a short decimal in hexadecimal
 * @args: Input string
 * @buf: Buffer pointer
 * @ibuf: Index for buffer pointer
 * Return: Number of chars printed
 */
int printt_hex(va_list args, char *buf, unsigned int buff)
{
	short int int_input, a, is_neg, count, first_digit;
	char *hexadecimal, *bi;

	int_input = va_arg(args, int);
	is_neg
		= 0;
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

	bi = malloc(sizeof(char) * (16 + 1));
	bi = fillBinaryArray(bi, int_input, is_neg, 16);
	hexadecimal = malloc(sizeof(char) * (4 + 1));
	hexadecimal = fillHexArray(bi, hexadecimal, 0, 4);
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
	return (count);
}
