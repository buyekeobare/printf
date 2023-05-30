#include "main.h"
/**
 * printtt_oct - To print the number in octal begining with zero
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed
 */
int printtt_oct(va_list args, char *buf, unsigned int buff)
{
	int int_input, a, is_neg, count, first_digit;
	char *octal, *bi;

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
	bi = malloc(sizeof(char) * (32 + 1));
	bi = fillBinaryArray(bi, int_input, is_neg, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = fillOctArray(bi, octal);
	for (first_digit = a = count = 0; octal[a]; a++)
	{
		if (octal[a] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buff = handlBuf(buf, octal[a], buff);
			count++;
		}
	}
	free(bi);
	free(octal);
	return (count + 1);
}
