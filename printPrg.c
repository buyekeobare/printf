#include "main.h"
#include <stdio.h>
/**
 * printPrg - To writes the character c to stdout
 * @a: Input char
 * @buf: Buffer pointer
 * @i: Index for buffer pointer
 * Return: On success 1.
 */
int printPrg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handlBuf(buf, '%', i);

	return (1);
}
