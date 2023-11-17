#include "main.h"


/**
 * _printf - the printf function
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char},
		{"%s", printf_string},
		{"%%", printf_37},
		{"%d", printf_dec},
		{"%i", printf_int},
		{"%r", printf_srev},
		{"%R", printf_rot13},
		{"%b", printf_bin},
		{"%u", printf_unsigned},
		{"%o", printf_oct},
		{"%x", printf_hex},
		{"%X", printf_HEX},
		{"%S", printf_exclusive_string},
		{"%p", printf_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 4;

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
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
