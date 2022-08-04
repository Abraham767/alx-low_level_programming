#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - it prints a name
 * @name: name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
