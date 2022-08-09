#include "main.h"

/**
 * _printf - prints characters and
 * number of characters.
 * @format: string passed.
 * Return: int.
 *
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list data;

	va_start(data, format);

	for (i = 0; format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}

		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(data, int));

					break;

				case 's':
					count += print_string(va_arg(data, char *));

					break;

				case '%':
					count += _putchar('%');
			}
		}
	}

	return (count);
}

/**
 * print_string - prints string.
 * @string: string is the passed string.
 * Return: int.
 */

int prints_string(char *string)
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i])
	}
	return (count);
}
