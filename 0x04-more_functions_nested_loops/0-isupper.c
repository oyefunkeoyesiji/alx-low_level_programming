#include "main.h"

/**
 * _isupper -> this is the fuction to check uppercase letters
 * @c: char to check
 *
 * Return: something but success
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	return (c >= 65 && <= 90);
	return (c >= 'A' && <= 'Z');
}
