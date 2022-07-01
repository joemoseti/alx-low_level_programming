#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int s;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;

	if (s > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, s);
	else if (s == 0)
		printf("%s %d is %d and is less than 6 and not 0\n" str, n, s);

	return (0);
}
