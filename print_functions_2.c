#include "holberton.h"

/**
 * print_oct - prints octal
* @lst: argument passed
* Return: count of characters printed
*/

int print_oct(va_list lst)
{
	unsigned int n;
	int rem;
	char arr[32];
	int j, count;

	j = 0;
	n = va_arg(lst, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		rem = n % 8;
		n /= 8;
		arr[j] = rem + '0';
		j++;
	}
	count = j;
	for (j--; j >= 0; --j)
		_putchar(arr[j]);
	return (count);
}

/**
* print_hexl - prints lowercase hexadecimal
* @lst: argument passed
* Return: count of characters printed
*/

int print_hexl(va_list lst)
{
	unsigned int n;
	int rem;
	char arr[32];
	int j, count;

	j = 0;
	n = va_arg(lst, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		rem = n % 16;
		n /= 16;
		if (rem < 10)
			arr[j] = rem + '0';
		else
			arr[j] = ((rem % 10) + 'a');
		j++;
	}
	count = j;
	for (j--; j >= 0; --j)
		_putchar(arr[j]);
	return (count);
}

/**
* print_hexup - prints uppercase hexadecimal
* @lst: argument passed
* Return: count of characters printed
*/

int print_hexup(va_list lst)
{
	unsigned int n;
	int rem;
	char arr[32];
	int j, count;

	j = 0;
	n = va_arg(lst, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
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
	count = j;
	for (j--; j >= 0; --j)
		_putchar(arr[j]);
	return (count);
}

/**
* print_rot13 - prints in rot13
* @lst: argument passed
* Return: count of characters printed
*/

int print_rot13(va_list lst)
{
	int i, j;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s;
	char *str = "(null)";

	s = (va_arg(lst, char*));
	if (s == NULL)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 52; ++j)
		{
			if (s[i] == arr1[j])
			{
				_putchar(arr2[j]);
				break;
			}
		}
		if (j == 52)
			_putchar(s[i]);
	}
	return (i);
}

/**
* print_rev - prints a string in reverse
* @lst: argument passed
* Return: count of characters printed
*/


int print_rev(va_list lst)
{
	char *str;
	char *null = "(null)";
	int i;

	str = va_arg(lst, char*);

	if (str == NULL)
	{
		for (i = 0; null[i]; i++)
		{
			_putchar(null[i]);
		}
		return (i);
	}
	_print_rev_recursion(str);

	for (i = 0; str[i]; i++)
		;
	return (i);
}
