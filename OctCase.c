#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *OctCase - Prints Octal number
 *@arg: argument
 *Return: int
 */
int OctCase(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), Aux = n;
	int cnt = 0, i, *arr;

	while (n / 8 != 0)
	{
		n = n / 8;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(int));
	for (i = 0; i < cnt; i++)
	{
		arr[i] = Aux % 8;
		Aux = Aux / 8;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnt);
}
