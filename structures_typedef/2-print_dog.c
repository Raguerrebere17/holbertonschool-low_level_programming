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
	(d->name == NULL) ? printf("Name: (nil)") : printf("%s\n", d->name);
	(d->age = 0) ? printf("Age: (nil)") : printf("%f\n", d->age);
	(d->owner == NULL) ? printf("Owner: (nil)") : printf("%s\n", d->owner);
	/*If a dog doesn't have an Owner, adopt it :D */
}
