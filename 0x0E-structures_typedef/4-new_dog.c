#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 * Return: The length of the string.
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}

	return (length);
}

/**
 * _strcopy - Copies a string from src to dest.
 * @src: The source string.
 * @dest: The destination string.
 * Return: A pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog and initializes its fields.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 * Return: A pointer to the new dog struct.
 *			Returns NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
