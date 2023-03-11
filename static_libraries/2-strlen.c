#include "main.h"
/**
 * _strlen - returs the length of a string
 * @s: pointer to adress of string
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
		;
	return (count);
}
