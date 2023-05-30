#include "main.h"
/**
 * fillHexArr - To writes the character c to stdout.
 *
 * @bi: array where is stored the binary.
 * @hex: array where is stored the hexadecimal.
 * @is_upp: integer that determines if the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit: Size of hex.
 * Return: Binary array.
 */
char *fillHexArr(char *bi, char *hex, int is_upp, int limit)
{
	int op, a, b, to_letter;

	hex[limit] = '\0';
	if (is_upp)
		to_letter = 55;
	else
		to_letter = 87;
	for (a = (limit * 4) - 1; a >= 0; a--)
	{
		for (op = 0, b = 1; b <= 8; b *= 2, a--)
			op = ((bi[a] - '0') * b) + op;
		a++;
		if (op < 10)
			hex[a / 4] = op + 48;
		else
			hex[a / 4] = op + to_letter;
	}
	return (hex);
}
