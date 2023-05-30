#include "main.h"

/**
 * fillBinaryArr - To prints decimal in binary.
 * @bi: pointer to binary.
 * @int: input number.
 * @is_neg: if input number is negative.
 * @limit: size of the binary.
 * Return: Number of chars printed.
 */
char *fillBinaryArr(char *bi, long int int_in, int is_neg, int limit)
{
	int n;

	for (n = 0; n < limit; n++)
		bi[n] = '0';
	bi[limit] = '\0';
	for (n = limit - 1; int_in > 1; n--)
	{
		if (int_in == 2)
			bi[n] = '0';
		else
			bi[n] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		bi[n] = '1';
	if (is_neg)
	{
		for (n = 0; bi[n]; n++)
			if (bi[n] == '0')
				bi[n] = '1';
			else
				bi[n] = '0';
	}
	return (bi);
}
