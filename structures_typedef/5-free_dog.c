#include "dog.h"

/**
 * free_dog - a
 * @d: a
 *
 * Description: a
 * Return: a
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
