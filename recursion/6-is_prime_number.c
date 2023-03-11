#include "main.h"
/**
 * findprime - Function that search a prime number
 * is_prime_number - Return 1 if the integer is prime...
 * ... otherwise return 0
 * @a: A number
 * @b: Other number
 * Return: Findprime, 1 or 0
 */
int findprime(int a, int b)
{
	if (a % b == 0 && b < a)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else
	{
		return (findprime(a, b + 1));
	}
}

int
is_prime_number(int n)
{
	int sol = 0;

	if (n <= 1)
	{
		return (0);
	}
	else if (n > 1)
	{
		sol = findprime(n, 2);
	}
	return (sol);
}
