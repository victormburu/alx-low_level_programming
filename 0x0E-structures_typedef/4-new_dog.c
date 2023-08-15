#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - find the length of a string
 * @s: input value
 * Return: the string to be measured
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * _strcopy - copies a string pointed to by src,
 * including terminating null byte, to buffer pointed
 * to by dest
 * @dest: input value
 * @src: input value
 * Return: Always 0
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: input value
 * @age: input value
 * @owner: input value
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
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
