#include <stdio.h>

void
*_callor(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb < 1 || size < 1)
		return (NULL);
	p = (char *)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < mnemb * size; a++)
		p[a] = 0;
	return (p);
