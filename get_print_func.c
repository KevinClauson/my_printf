#include "holberton.h"
#include <stdio.h>
/**
 * get_print_func - get print functions
 * @c: string passed
 * @lst: va_list
 * @index: index
 * Return: count of chars printed
 */



int get_print_func(char *c, va_list lst, int index)
{
	int i;
	int count = 0;

	fmod_t fms[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'i', print_dec},
		{'b', print_bi},
		{'u', print_udec},
		{'o', print_oct},
		{'x', print_hexl},
		{'X', print_hexup},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_strhex},
		{'\0', NULL}
	};

	i = 0;

	while (fms[i].fmd != '\0')
	{
		if (c[index] == fms[i].fmd)
		{
			count += (fms[i].f(lst));
			break;
		}
		i++;
	}
	if (fms[i].fmd == '\0')
	{
		_putchar(c[index - 1]);
		_putchar(c[index]);
		count += 2;
	}
	return (count);
}
