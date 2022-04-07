#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @n: Number to be checked
 *
 * Return: 1 (Sucess) OR 0 (Failure)
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	else
		return (0);
}
