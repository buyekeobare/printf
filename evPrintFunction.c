#include "main.h"
/**
 * evPrintFunction - To returns the amount of identifiers.
 * @st: argument indentifier
 * @in: index of argument identifier.
 * Return: amount of identifiers.
 */
int evPrintFunction(const char *st, int in)
{
	print_f pr[] = {
		{"c", printChr}, {"s", printStr}, {"i", printInt},
		{"d", printInt}, {"b", printBnr}, {"u", print_nt},
		{"o", printOct}, {"x", printHex}, {"X", printUpx},
		{"S", printUsr}, {"p", printAdd}, {"li", print_int},
		{"ld", print_int}, {"lu", print_unt}, {"lo", print_oct},
		{"lx", print_hex}, {"lX", print_upx}, {"hi", printt_int},
		{"hd", printt_int}, {"hu", printt_unt}, {"ho", printt_oct},
		{"hx", printt_hex}, {"hX", printt_upx}, {"#o", printtt_oct},
		{"#x", printtt_hex}, {"#X", print_upx}, {"#i", printInt},
		{"#d", printInt}, {"#u", print_nt}, {"+i", prin_int},
		{"+d", prin_int}, {"+u", print_nt}, {"+o", printOct},
		{"+x", printHex}, {"+X", printUpx}, {" i", prins_int},
		{" d", prins_int}, {" u", print_nt}, {" o", printOct},
		{" x", printHex}, {" X", printUpx}, {"R", printRot},
		{"r", printRev}, {"%", printPrg}, {"l", printPrg},
		{"h", printPrg}, {" +i", prin_int}, {" +d", prin_int},
		{"+ i", prin_int}, {"+ d", prin_int}, {" %", printPrg},
		{NULL, NULL},
	};
	int a = 0, b = 0, first_in;

	first_in = in;
	while (pr[a].type_arg)
	{
		if (st[in] == pr[a].type_arg[b])
		{
			if (pr[a].type_arg[b + 1] != '\0')
				in++, b++;
			else
				break;
		}
		else
		{
			b = 0;
			a++;
			in = first_in;
		}
	}
	return (b);
}
