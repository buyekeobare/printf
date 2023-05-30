#include "main.h"

/**
 * handlBuf - To concatenates the buffer characters
 * @buf: buffer pointer
 * @c: The charcter to concatenate
 * @buff: Index of buffer pointer
 * Return: Index of buffer pointer.
 */
unsigned int handlBuf(char *buf, char c, unsigned int buff)
{
	if (buff == 1024)
	{
		printBuf(buf, buff);
		buff = 0;
	}
	buf[buff] = c;
	buff++;
	return (buff);
}
