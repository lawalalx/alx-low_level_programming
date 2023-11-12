#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything based on a given format.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int num;
	float fnum;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}

