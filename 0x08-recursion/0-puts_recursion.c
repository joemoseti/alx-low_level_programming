#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to be printed
 * Return: void
 */

int main(void)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);

}
