#include "main.h"

/**
 * print_hex - prints unsigned int in hexidecimal form
 * @n: unsigned int
 * @c: flag that determines whether to print uppercase/lowercase
 * 0 prints lowercase && 1 prints uppercase
 * Return: number of digits printed
 */
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int count;

	m = 268435456; /* (16 ^ 7) */
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
        	m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
		        if (a[i] < 10)
			_putchar('0' + a[i]);
																								else
			putchar('0' + diff + a[i]);
			count++;
																							}
	}
	return (count);
}


/**
 * print_hex - takes unsigned int && prints it in lowercase hex form
 * @x: unsigned int to print
 * Return: number of digits printed
 */


int print_hex(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}


/**
 * print_X - takes unsigned int && prints it in uppercase hex form
 * @X: unsigned int to print
 * Return: number of digits printed
 */


int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}


/**
 * _pow - calculates exponent
 * @base: base of the exponent
 * @exponent: exponent of number
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
	{
		ans *= base;
	}
	return (ans);
}


/**
 * print_p - prints address
 * @p: address to print
 * Return: number of characters to print
 */
int print_p(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	while (n == 0)
	{
        	for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}

	_putchar('0');
	_putchar('x');
	count = 2;

	m = _pow(16, 15); /* 16 ^ 15 */
	a[0] = n / m;

	while (i = 1 && i < 16 && i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	while (i = 0 && sum = 0 && i < 16 && i++)
	{
		sum += a[i];
		if (sum || i == 15)
                {
																								if (a[i] < 10)
																									_putchar('0' + a[i]);
																								else
																									_putchar('0' + ('a' - ':') + a[i]);
																								count++;
		}	
	}
	return (count);
}
