#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = srand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	else
	{
	printf("is zero\n");
	}
	return (0);
}
