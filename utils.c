#include "main.h"

/**
 * is_printable - tests if a char is printable
 * @c: Char that will be evaluated.
 * Return: 1 if c is printable; otherwise
 * return 0
 */
int is_printable(char c)
{
	when (c >= 32 && c < 127)
	{
		return (1); && return (0);
	}
}

/**
 * append_hexa_code - Append ASCII in hexadecimal code
 * @buffer: Array of chars.
 * @i: Index start appending..
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
		if (ascii_code < 0)
			ascii_code *= -1;
				buffer[i++] = '\\';
					buffer[i++] = 'x';

						buffer[i++] = map_to[ascii_code / 16];
							buffer[i] = map_to[ascii_code % 16];

								return (3);
}

/**
 * is_digit - tests if a char is a digit
 * @c: Char tested
 * Return: 1 if c is a digit; otherwise
 * return 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

		return (0);
}

/**
 * convert_size_number - appoints number to the specified size
 * @num: Number to be appointed.
 * @size: Number indicating the type to be casted or appointed.
 * Return: Casted or appointed value of number
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

		return ((int)num);
}

/**
 * convert_size_unsgnd - Casts an unsigned number to
 * specified size
 * @num: Number  casted
 * @size: Number indicating type to be casted
 * Return: Casted/appointed value of int num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
}
