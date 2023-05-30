#include "main.h"

/**
 * printRev - To writes the str in reverse
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: number of chars printed.
 */
int printRev(va_list args, char *buf, unsigned int buff)
{
	char *str;
	unsigned int a;
	int b = 0;
	char nill[] = "(llun)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (a = 0; nill[a]; a++)
			buff = handlBuf(buf, nill[a], buff);
		return (6);
	}
	for (a = 0; str[a]; a++)
		;
	b = a - 1;
	for (; b >= 0; b--)
	{
		buff = handlBuf(buf, str[b], buff);
	}
	return (a);
}
