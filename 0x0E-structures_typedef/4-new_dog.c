#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to where we copy the string to
 * @src: the string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (m = 0; m < len; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: NULL if it fails, otherwise return a pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
