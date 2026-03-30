#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s, *sep = "";

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i')
			printf(format[i] == 'c' ? "%s%c" : "%s%d", sep, va_arg(ap, int)), sep = ", ";
		if (format[i] == 'f' || format[i] == 's')
			format[i] == 'f'
			? printf("%s%f", sep, va_arg(ap, double))
			: (s = va_arg(ap, char *), printf("%s%s", sep, s ? s : "(nil)")),
			sep = ", ";
		i++;
	}
	printf("\n");
}
