#include "dog.h"
#include <stdio.h>

/**
 *  print_dog - a function that prints dog structs
 *  @d: prints dog structs
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

