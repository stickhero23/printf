
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to write
 * Return: Always 0, success, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
