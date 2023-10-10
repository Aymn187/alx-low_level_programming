#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	 unsigned int x, r, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)

	return (NULL);

	dog = malloc(sizeof(dog_t));
{
	if (dog == NULL)
	return (NULL);
}
	for (x = 0; name[x]; x++)
	x++;
	dog->name = malloc(x * sizeof(char));
	if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
	for (i = 0; i < x; i++)
	dog->name[i] = name[i];
	dog->age = age;
	for (r = 0; owner[r]; r++)
	r++;
	dog->owner = malloc(r * sizeof(char));
	if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
	for (i = 0; i < r; i++)
	dog->owner[i] = owner[i];
	return (dog);
}