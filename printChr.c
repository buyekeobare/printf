#include "main.h"
#include <stdio.h>
/**
 * printChr - To writes the character n to stdout.
 * @args: input char.
 * @buf: buffer pointer.
 * @buff: index for buffer pointer.
 * Return: On success 1.
 */
int printChr(va_list args, char *buf, unsigned int buff)
{
	char n;

	n = va_arg(args, int);
	handlBuf(buf, n, buff);

	return (1);
}
