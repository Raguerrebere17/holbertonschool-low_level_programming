#include "stdio.h"
#include "dog.h"
/**
 * print_dog - Prints dog
 * @d: Dog's info
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	(d->age != 0) ? printf("Age: %f\n", d->age) : printf("Age: 0.000000\n");
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
		/*If a dog doesn't have an owner, adopt it :D */
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
