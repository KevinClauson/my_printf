#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: argument passed
 * Return: count of characters printed
 */


void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

/**
 * print_strhex - prints modified string
 * @lst: argument passed
 * Return: count of characters printed
 */

int print_strhex(va_list lst)
{
	int i, count = 0;
	char *s;
	char *str = "(null)";

	s = va_arg(lst, char*);
	if (s == NULL)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}


	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			count += get_hex(s[i]);
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}


/**
 * get_hex - prints modified string
 * @c: char passed
 * Return: count of characters printed
 */

int get_hex(char c)
{
	unsigned int n;
	int rem;
	char arr[32];
	int j, count = 0;

	_putchar('\\');
	_putchar('x');
	count += 2;

	n = (unsigned int) c;
	j = 0;

	if (n < 16)
	{
		_putchar('0');
		count++;
	}
	while (n != 0)
	{
		rem = n % 16;
		n /= 16;
		if (rem < 10)
			arr[j] = rem + '0';
		else
			arr[j] = ((rem % 10) + 'A');
		j++;
	}
	count += j;
	for (j--; j >= 0; --j)
		_putchar(arr[j]);

	return (count);
}
