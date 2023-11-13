#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: The format string
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list list_args;

	if (format == NULL)
		return (-1);
	va_start(list_args, format);
	while (*format)
	{
	if (*format != '%')
	{
		write(1, format, 1);
		print_char++;
	}
	else
	{
		format++;
		if (format == '\0')
		break;
		if (*format == '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(list_args, int);

			write(1, &c, 1);
			print_char++;
		}
		else if (format == 's')
		{
			char s = va_arg(list_arg, char*);
			int str_len = 0;

			while (str[str_len] != '\0')
				str_len++;
			write(1, str, str_len);
			print_char += str_len;
		}
	}
	format++;
	}
	va_end(list_args);
	return (print_char);
}
/**
 * main - The entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	_printf("Lois\n");
	_printf("%c\n", 'v');
	_printf("%s\n", "string");
	_printf("%%\n");
	return (0);
}
