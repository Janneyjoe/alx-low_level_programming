#include "main.h"


/**
 * main - entry point
 *
 * @c: the character
 * return: 1 if letter _islower, 0 if not
 */
int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
