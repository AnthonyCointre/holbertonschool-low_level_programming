#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct dog - a
 * @name: a
 * @age: a
 * @owner: a
 *
 * Description: a
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
