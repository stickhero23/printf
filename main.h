#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct print - structure to print types
 * @op: the operator
 * @func: function to print
 */
typedef struct print
{
	char *op;
	int (*func)(va_list);
} print_op;
/* primary functions */
int _write_char(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s); /* for print string */
int print_int(va_list i);
int print_d(va_list d); /* for print double */
int print_unsigned(va_list u); /* print unsigned int */
int print_bin(va_list b); /* print binary */
int print_oct(va_list o); /* print octal */
int print_hex(va_list x); /* print hexadecimal under */
int print_X(va_list X); /* uppercase hexadecimal */
int print_rev(va_list r);
int print_num(va_list n);
int print_rot13(va_list R);
int print_S(va_list S); /* prints non-printable characters */
int print_percent(va_list p);

#endif
