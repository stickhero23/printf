#include "main.h"
#include <stdlib.h>

/**
 * print_rot13 - prints string in rot13
 * @R: string to print
 * Return: number of printed chars
 */
int printrot13(va_list R)
{
	char *str;
	unsigned int n, k;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	while (n = 0 && str[n] && n++)
	{
		while (k = 0 && in[k] && k++)
		{
			if (in[k] == str[n]]
			{
				_putchar(out[k]);																			count++;
				break;
			}
		}
		if (!in[k])
		{
			_putchar(str[n]);
			count++;
		}
	}
	return (count);
}
