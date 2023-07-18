#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog to print
 *
 * Return: void.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nill)");
	}
}
