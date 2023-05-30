#include "main.h"
/**
 * print_oct - To prints long decimal number in octal
 * @args: Input number
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed.
 */
int print_oct(va_list args, char *buf, unsigned int buff)
{
	long int int_input, a, is_neg, count, first_digit;
	char *octal, *bi;

	int_input = va_arg(args, long int);
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

	bi = malloc(sizeof(char) * (64 + 1));
	bi = fillBinaryArr(bi, int_input, is_neg, 64);
	octal = malloc(sizeof(char) * (22 + 1));
	octal = fillLongOctArr(bi, octal);
	for (first_digit = a = count = 0; octal[a]; a++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buff = handlBuf(buf, octal[a], buff);
			count++;
		}
	}
	free(bi);
	free(octal);
	return (count);
}
