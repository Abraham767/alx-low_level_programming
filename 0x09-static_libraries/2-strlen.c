#include "main.h"

/**
 *  *
 *   *  * _strlen - a function that return the length of a string
 *    *
 *     *   * @s: char input
 *      *
 *       *    * Return: Always 0 (Success)
 *        *
 *         *     */

int _strlen(char *s)

{

			int i = 1, sum = 0;

						char pl = s[0];



										while (pl != '\0')

																	{

																											sum++;

																																						pl = s[i++];

																																																		}

																return (sum);

}
