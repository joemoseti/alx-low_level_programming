#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 * @c: The int to print
 * Return: Always 0.
 */

int -isalpha(int c)

{

	if ((c > 'a' && 'z') || (c > 'A' && c < 'z'))
	{
		return (1);
	}
