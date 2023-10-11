#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to be defined
 * @name: parameter of char data type
 * @age: parameter of float data type
 * @owner: parameter of char data type
 * Return: 0 Always
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
