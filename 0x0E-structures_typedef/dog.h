#include "dog.h"
#include <stdlib.h>

/**
*** init_dog - defines a dog from the ************
*** predefined struct called dog_t ***************
*** @d: the dog to be initialized ****************
*** @name: name of the new dog created ***********
*** @age: age of the new dog created *************
*** @owner: owner of the new dog created *********
*** Return: A new dog ****************************
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *new_dog = d;

	if (new_dog == NULL)
	{
		return;
	}

	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;
}
