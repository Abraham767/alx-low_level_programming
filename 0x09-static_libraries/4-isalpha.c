#include "main.h"

/**
 *  *
 *   *  * _isalpha - a functions that checks for alphabetic character
 *    *
 *     *   * @c: single letter input
 *      *
 *       *    * Return: Always 0 (Success)
 *        *
 *         *     */

int _isalpha(int c)

{

			if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

									return (1);

						else

													return (0);

}
