#include "main.h"

/**
 * _islowwer - checks if a character is lowercase
 * @c: the character
 * return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
