#include "main.h"
/**
 * fillShortOctArr - To calculates a short octal number
 *
 * @bi: An array where is stored the binary.
 * @oct: An array where is stored the octal.
 *
 * Return: binary array.
 */
char *fillShortOctArr(char *bi, char *oct)
{
	int op, a, b, oc, limit;

	oct[6] = '\0';
	for (a = 15, oc = 5; a >= 0; a--, oc--)
	{
		if (a > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, b = 1; b <= limit; b *= 2, a--)
			op = ((bi[a] - '0') * b) + op;
		a++;
		oct[oc] = op + '0';
	}
	return (oct);
}
