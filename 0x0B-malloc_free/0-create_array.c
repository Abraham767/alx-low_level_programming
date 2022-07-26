#include <stdio.h>
#include "main.h"
#include  <stdlib.h>

/**
 *  create_array - it creates array
 *  @size: size of the array
 *  @c: character an array is initialized with
 *  Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
