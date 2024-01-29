#include <stdio.h>

/**
 *add - function add 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: sum of 2 int
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 *sub - function sub 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: sub of 2 int
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 *mul - function times 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: mul of 2 int
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 *div - function divides 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: div of 2 int
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 *mod - function gets mod 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: the int mod
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
