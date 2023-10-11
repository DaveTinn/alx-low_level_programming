#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function printing defined variable type struct dog
 * @d: pointer of the defined type
 * Return: 0 Always
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
