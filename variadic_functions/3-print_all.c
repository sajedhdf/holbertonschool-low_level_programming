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
		if (format[i] == 'c') printf("%s%c", sep, va_arg(ap, int)), sep = ", ";
		if (format[i] == 'i') printf("%s%d", sep, va_arg(ap, int)), sep = ", ";
		if (format[i] == 'f') printf("%s%f", sep, va_arg(ap, double)), sep = ", ";
		if (format[i] == 's') s = va_arg(ap, char *), printf("%s%s", sep, s ? s : "(nil)"), sep = ", ";
		i++;
	}
	printf("\n");
}
