#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - performs addition
 * @a: First number
 * @b: Second number
 * Return: The result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Performs subtraction
 * @a: First number
 * @b: Second number
 * Return: The result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Performs multiplication on 2 numbers
 * @a: First number
 * @b: second number
 * Return: The product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Performs the division of 2 numbers
 * @a: The first number
 * @b: The second number
 * Return: The division of @a and @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Performs the modulus of 2 numbers
 * @a: The first number
 * @b: The second number
 * Return: The modulus of a, b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
