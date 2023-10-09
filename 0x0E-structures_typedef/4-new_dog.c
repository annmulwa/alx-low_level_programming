#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - prints the string length
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - returns a copy of the string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - returns pointer to new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to n_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (n_dog == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	_strcpy(n_dog->name, name);
	_strcpy(n_dog->owner, owner);
	n_dog->age = age;
	return (n_dog);
}
