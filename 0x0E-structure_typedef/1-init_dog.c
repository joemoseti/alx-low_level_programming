#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@d: array
*@name: name of dog
*@age: age of dog
*owner: owner
* Description: this is struct for dog
*/

void init_dog(struct dog *d, char *name, float age,chr *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
