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
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
