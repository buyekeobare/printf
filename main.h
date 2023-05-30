#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - a struct that stores printer's function
 * @type_arg: identifier
 * @k: a pointer to the printer function.
 */

typedef struct print
{
	char *type_arg;
	int (*k)(va_list, char *, unsigned int);
}print_f;

int _printf(const char *format, ...);
int printPrg(va_list __attribute__((unused)), char *, unsigned int);
int printChr(va_list args, char *buf, unsigned int buff);
int printStr(va_list args, char *buf, unsigned int buff);
int printInt(va_list args, char *buf, unsigned int buff);
int printBnr(va_list args, char *buf, unsigned int buff);
int print_nt(va_list args, char *buf, unsigned int buff);
int printOct(va_list args, char *buf, unsigned int buff);
int printHex(va_list args, char *buf, unsigned int buff);
int printUpx(va_list args, char *buf, unsigned int buff);
int printUsr(va_list args, char *buf, unsigned int buff);
int printAdd(va_list args, char *buf, unsigned int buff);
int printRev(va_list ars, char *buf, unsigned int buff);
int printRot(va_list args, char *buf, unsigned int buff);
int print_int(va_list args, char *buf, unsigned int buff);
int print_unt(va_list args, char *buf, unsigned int buff);
int print_oct(va_list args, char *buf, unsigned int buff);
int print_hex(va_list args, char *buf, unsigned int buff);
int print_upx(va_list args, char *buf, unsigned int buff);
int printt_int(va_list args, char *buf, unsigned int buff);
int printt_unt(va_list args, char *buf, unsigned int buff);
int printt_oct(va_list args, char *buf, unsigned int buff);
int printt_hex(va_list args, char *buf, unsigned int buff);
int printt_upx(va_list args, char *buf, unsigned int buff);
int prin_int(va_list args, char *buf, unsigned int buff);
int printtt_oct(va_list args, char *buf, unsigned int buff);
int printtt_hex(va_list args, char *buf, unsigned int buff);
int printtt_upx(va_list args, char *buf, unsigned int buff);
int prins_int(va_list args, char *buf, unsigned int buff);
int (*getPrint(const char *ss, int in))(va_list, char *, unsigned int);
int evPrintFunction(const char *st, int in);
unsigned int handlBuf(char *buf, char c, unsigned int buff);
int printBuf(char *buf, unsigned int nbuf);
char *fillBinaryArr(char *bi, long int int_in, int is_neg, int limit);
char *fillOctArr(char *bi, char *oct);
char *fillLongOctArr(char *bi, char *oct);
char *fillShortOctArr(char *bi, char *oct);
char *fillHexArr(char *bi, char *hex, int is_upp, int limit);


#endif
