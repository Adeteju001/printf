#include "main.h"

/**
 * print_number - print integer
 * @args: an integer
 * Return: the result
 */

int print_number(va_list args)
{
	int n;
	int check;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	check = 1;
	len = 0;

	if (n < 0)
	{
		len += my_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / check > 9;)
		check *= 10;
	for (; check != 0;)
	{
		len += my_putchar('0' _ num / check);
		num %= check;
		check /= 10;
	}
	return (len);
}