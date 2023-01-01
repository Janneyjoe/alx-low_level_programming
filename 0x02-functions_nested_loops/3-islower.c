#include "main.h"


/**
 * main - entry point
 *
 * return: Always 0 (success)
 */
int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}	
