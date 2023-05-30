#include "main.h"
#include <stdio.h>
/**
 * printAdd - To prints the address of an input variable
 * @args: input address.
 * @buf: buffer pointer.
 * @buff: index for buffer pointer
 *
 * Return: Number of chars printed.
 */
int printAdd(va_list args, char *buf, unsigned int buff)
{
	void *ad;
	long int int_in;
	int a, c, first_d, is_neg;
	char *hex, *bi;
	char nill[] = "(nil)";

	ad = (va_arg(args, void *));
	if (ad == NULL)
	{
		for (a = 0; nill[a]; a++)
			buff = handlBuf(buf, nill[a], buff);
		return (5);
	}
	int_in = (intptr_t)ad;
	is_neg = 0;
	if (int_in < 0)
	{
		int_in = (int_in * -1) - 1;
		is_neg = 1;
	}
	bi = malloc(sizeof(char) * (64 + 1));
	bi = fillBinaryArr(bi, int_in, is_neg, 64);
	hex = malloc(sizeof(char) * (16 + 1));
	hex = fillHexArr(bi, hex, 0, 16);
	buff = handlBuf(buf, '0', buff);
	buff = handlBuf(buf, 'x', buff);
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
	return (count + 2);
}
