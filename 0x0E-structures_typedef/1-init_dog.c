#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intializes a variable of type struct dog
 * @d: pointer to the parameters
 * @name: parameter of char data type
 * @age: parameter of float data type
 * @owner: parameter of char data type
 * Return: 0 Always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
