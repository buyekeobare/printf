#include "main.h"

/**
 * printStr - To write the string to stdout
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: On success 1.
 */
int printStr(va_list args, char *buf, unsigned int buff)
{
	char *str;
	unsigned int a;
	char nill[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (a = 0; nill[a]; a++)
			buff = handlBuf(buf, nill[a], buff);
		return (6);
	}
	for (a = 0; str[a]; a++)
		buff = handlBuf(buf, str[a], buff);
	return (a);
}
