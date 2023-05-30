#include "main.h"
/**
 * fillOctArr - To writes the character c to stdout
 *
 * @bi: An array where is stored the binary.
 * @oct:An  array where is stored the octal.
 *
 * Return: Binary array.
 */
char *fillOctArray(char *bi, char *oct)
{
	int op, a, b, oc, limit;

	oct[11] = '\0';
	for (a = 31, oc = 10; a >= 0; a--, oc--)
	{
		if (a > 1)
			limit = 4;
		else
			limit = 2;
		for (op = 0, b = 1; b <= limit; b *= 2, a--)
			op = ((bi[a] - '0') * b) + op;
		a++;
		oct[oc] = op + '0';
	}
	return (oct);
}
