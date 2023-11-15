#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: integer.
 */
int _printf(const char * const format, ...)
{
	int len = 0;
	match m[] = {
		{"%s", printf_string}, {"%c", printf_char},{"%%", print_37},{"%i", print_int}, {"%d", print_dec}, {"%r", print_revs}, {"%R", print_rot13}, {"%b", print_bin},{"%u", print_unsigned},{"%o", print_octal}, {"%x", print_hex}, {"%X", print_caphex},{"%S", print_diff_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (len);
}
