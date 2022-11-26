#include "main.h"
#include <stdlib.h>
/**
 * print_char - prints character
 * @c: char to print
 * Return: always 1
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_write_char(ch);
	return (1);
}
/**
 * print_str - prints a string
 * @s: string to print
 * Return: a number of chars
 */
int print_str(va_list s)
{
	int count;
	int *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_write_char(str[count]);
	}
	return (count);
}
/**
 * prnt_hex - prints a char's ascii in uppercase
 * @c: char to print
 * Return: Always 2, number of chars printed.
 */
static int prnt_hex(char c)
{
	int count;
	char diff = 'A' - ':';
	char j[2];

	j[0] = c / 16;
	j[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (j[count] >= 10)
			_write_char('0' + diff + j[count]);
		else
			_write_char('0' + j[count]);
	}
	return (count);
}
/**
 * print_S - prints a string and ascii value of nonprintable character.
 * @S: string to print
 * Return: a number of chars printed
 */
int print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_write_char('\\');
			_write_char('x');
			count += 2;
			count += prnt_hex(str[i]);
		}
		else
		{
			_write_char(str[i]);
			count++;
		}

	}
	return (count);
}
/**
 * print_rev - reverse print a string
 * @r: a string to print in reverse.
 * Return: number of chars printed
 */
int print_rev(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_write_char(str[i]);
		count++;
	}
	return (count);
}
