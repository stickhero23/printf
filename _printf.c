#include "main.h"
#include <stdlib.h>
/**
 * check_specifiers - checks if valid format specifier
 * @format: possible format specifier
 * Return: a pointer to valid function or NULL.
 */
static int (*check_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_op p[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_d},
		{"u", print_unsigned},
		{"b", print_bin},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_X},
		{"p", print_percent},
		{"S", print_S},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};
	for (i = 0; p[i].op != NULL; i++)
	{
		if (*(p[i].op) == *format)
		{
			break;
		}
	}
	return (p[i].func);
}
/**
 * _printf - prints anything
 * @format: list of arguments types
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(va_list, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_write_char(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		func = check_specifiers(&format[i + 1]);
		if (func != NULL)
		{
			count += func(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_write_char(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}
