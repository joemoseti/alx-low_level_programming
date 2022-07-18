#include "main.h"

/**
 * strpbk - searches for any set of bytes
 * @s: This is the c string any character to be scanned
 * @accept: character in str1 that matches one of the characters in str2
 * Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept);
{
	int j;

	while (*s != '\0') /* Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0') /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			s++; /*add s+1*/
		}
		return (0);

	}
