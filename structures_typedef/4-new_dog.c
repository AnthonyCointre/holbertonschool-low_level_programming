#include "dog.h"

/**
 * _strlen - a
 * @s: a
 *
 * Return: a
 *
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		while (*(s + len) != '\0')
		{
			len++;
		}
	}

	return (len);
}

/**
 * _strcpy - a
 * @dest: a
 * @src: a
 *
 * Return: a
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

/**
 * new_dog - a
 * @name: a
 * @age: a
 * @owner: a
 * Return: a
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * (len_name + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}
