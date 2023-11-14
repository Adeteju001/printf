#include "main.h"
#include <stdint.h>

/**
 * _printf - print integer
 * @format: a char
 * Return: the result
 */
int _printf(const char *format, ...)
{

	int printed_chars;
	conve_t funct_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"i", p_integer},
		{NULL, NULL}
	};

	va_list args;

	if(format == NULL)
		return (-1);
	va_start(args, format);

	printed_chars = parser(format, funct_list, args);
	va_end(args);

	return (prrinted_chars);
}
