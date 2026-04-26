#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print - structure for format specifiers
 * @id: format identifier
 * @f: function pointer
 */
typedef struct print
{
	char id;
	void (*f)(va_list);
} print_element;

/* prototypes */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

#endif
