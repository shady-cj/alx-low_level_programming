#include <stdio.h>
void before_main() __attribute__((constructor));
/**
 * before_main - This function executes before the main function
 * Return: void
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
