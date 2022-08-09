#include "main.h"

/**
 * get_func - function to find a function pointer
 * @a: specifier to find the correct function
 *
 * Return: function pointer
 */
int(*get_func(const char a))(va_list)
{
	unsigned int x = 0;

	format_t structs_pr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_integer},
		{'\0', NULL}
	};

	for (; structs_pr[x].spac; x++)
	{
		if (a == structs_pr[x].spac)
			return (structs_pr[x].f);
	}

	return (NULL);
}
