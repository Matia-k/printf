#include "main.h"
/**
  *print_string - prints a string.
  *@string: pointer to the string to be printed.
  *Return: The number of characters in string.
  */

int print_string(char *string)
{
	int count, i;

	count = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}

	return (count);
}
