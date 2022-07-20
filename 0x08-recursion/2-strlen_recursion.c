#include "main.h"
/**
 *  _strien_recursion - a function that print length of a strings
 *  @s: input
 *  Return: Always 0
 */
int _strien_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strien_recursion(s + 1));
	}
}
