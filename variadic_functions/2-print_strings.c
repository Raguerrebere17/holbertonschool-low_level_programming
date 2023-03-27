#include "variadic_functions.h"
/**
 * print_strings - Prints the strings
 * @separator: Separator that include ", "
 * @n: Strings dated
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int cont;
	char *may;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (cont = 0; cont < n; cont++)
	{
		if (cont != n - 1)
		{
			may = va_arg(list, char *);
			printf("%s%s", may, separator);
		}
	}
	if (n != 0)
	{
		may = va_arg(list, char *);
		if (may == NULL)
			printf("(nil)");
		else
			printf("%s", may);
	}
	printf("\n");
	va_end(list);
}
