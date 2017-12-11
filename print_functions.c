#include "holberton.h"

/**
 * print_char - prints char
 * @lst: arguments passed
 * Return: always 1
 */

int print_char(va_list lst)
{
	char c;
	/*print*/
	c = va_arg(lst, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - prints string
 * @lst: string passed
 * Return: count of characters printed
 */

int print_str(va_list lst)
{
	int i;
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
		_putchar(s[i]);
	return (i);
}

/**
 * print_dec - prints decimal
 * @lst: argument passed
 * Return: count of characters printed
 */

int print_dec(va_list lst)
{
	int  temp, temp2, cnt, div, result, i, n, neg;

	n = va_arg(lst, int);
	cnt = neg = 0;
	div = 1;
	if (n < 0)
	{
		_putchar('-');
		neg = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		temp = n;
		while (temp)
		{
			temp /= 10;
			++cnt;
		}
		temp2 = cnt;
		while (temp2 > 1)
		{
			div *= 10;
			--temp2;
		}
		for (i = 0; i < cnt; ++i)
		{
			result = n / div;
			if (result < 0)
				result *= -1;
			_putchar(result + '0');
			n %= div;
			div /= 10;
		}
	}
	return (cnt + neg);
}

/**
 * print_bi - prints binary
 * @lst: argument passed
 * Return: count of characters printed
 */

int print_bi(va_list lst)
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
		rem = n % 2;
		n /= 2;
		arr[j] = rem + '0';
		j++;
	}
	count = j;
	for (j--; j >= 0; --j)
		_putchar(arr[j]);
	return (count);
}

/**
 * print_udec - prints usigned decimal
 * @lst: argument passed
 * Return: count of characters printed
 */

int print_udec(va_list lst)
{
	unsigned int  temp, temp2, cnt, div, result, i, n;

	n = va_arg(lst, unsigned int);
	cnt = 0;
	div = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		temp = n;
		while (temp)
		{
			temp /= 10;
			++cnt;
		}
		temp2 = cnt;
		while (temp2 > 1)
		{
			div *= 10;
			--temp2;
		}
		for (i = 0; i < cnt; ++i)
		{
			result = n / div;
			_putchar(result + '0');
			n %= div;
			div /= 10;
		}
	}
	return (cnt);
}
