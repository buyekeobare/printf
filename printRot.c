#include "main.h"

/**
 * printRot - To writes the str in ROT13
 * @args: Input string
 * @buf: Buffer pointer
 * @buff: Index for buffer pointer
 * Return: Number of chars printed.
 */

int printRot(va_list args, char *buf, unsigned int buff)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int a, b, c;
	char nill[] = "(avyy)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (a = 0; nill[a]; a++)
			buff = handlBuf(buf, nill[a], buff);
		return (6);
	}
	for (a = 0; str[a]; a++)
	{
		for (c = b = 0; alf[b]; b++)
		{
			if (str[a] == alf[b])
			{
				c = 1;
				buff = handlBuf(buf, rot[b], buff);
				break;
			}
		}
		if (c == 0)
			buff = handlBuf(buf, str[a], buff);
	}
	return (a);
}
