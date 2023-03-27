#include "variadic_functions.h"
/**
 * print_numbers - Prints the numbers dated
 * @separator: Separator that include ", "
 * @n: Numbers dated
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int cont;

	va_start(list, n);
	
	if (separator == NULL)
		separator = "";
	for (cont = 0; cont < n; cont++)
	{
		if (cont != n - 1)
			printf("%i%s", va_arg(list, const unsigned int), separator);
	}
	if (n != 0)
		printf("%i", va_arg(list, const unsigned int));
	printf("\n");
	va_end(list);
}
