#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - This function takes in two integers and
 * returns a function pointer to the desired operation function
 * @s: The string parameter to the function
 * Return: Function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
