#include "main.h"
/**
 * printUsr - To print a string and values of
 * non-printed chars
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed
 */
int printUsr(va_list args, char *buf, unsigned int buff)
{
	unsigned char *str;
	char *hexadecimal, *bi;
	unsigned int a, sum, op;

	str = va_arg(args, unsigned char *);
	bi = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = a = 0; str[a]; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			buff = handlBuf(buf, '\\', buff);
			buff = handlBuf(buf, 'x', buff);
			op = str[a];
			bi = fillBinaryArr(bi, op, 0, 32);
			hexadecimal = fillHexArr(bi, hexadecimal, 1, 8);
			buff = handlBuf(buf, hexadecimal[6], buff);
			buff = handlBuf(buf, hexadecimal[7], buff);
			sum += 3;
		}
		else
			buff = handlBuf(buf, str[a], buff);
	}
	free(bi);
	free(hexadecimal);
	return (a + sum);
}
