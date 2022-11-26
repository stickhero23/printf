
#include <unistd.h>
/**
 * _write_char - writes the character c to stdout
 * @c: the character to write
 * Return: Always 0, success, -1 on error.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
