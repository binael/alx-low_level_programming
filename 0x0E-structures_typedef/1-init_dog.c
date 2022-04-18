#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		*(d).name = name;
		*(d).age = age;
		*(d).owner = owner;
	}
}
