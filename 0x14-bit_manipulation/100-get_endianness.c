
#include "main.h"
/**
 *get_endianness - function that checks the endianness.
 *Return: 0 if big or 1 if small
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}

