#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: points to the string to type in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s) /*If statement*/
	{
		_print_rev_recursions(s = 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
