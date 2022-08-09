#include "main.h"
/**
 * print_decimal - function prints digits of a number.
 * @value: an int whose digits are to be printed.
 * Return: The number of digits printed.
 */
int print_decimal(int value)
{
	int count;

	count = 0;
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	if (value / 10)
		count += print_decimal(value / 10);
	count += _putchar(value % 10 + '0');
	return (count);
}
