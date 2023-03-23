#ifndef Poppy
#define Poppy

/**
 * struct dog - Dog's info
 * @name: Dog's Name
 * @age: Dog's Age
 * @owner: Dog's Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
