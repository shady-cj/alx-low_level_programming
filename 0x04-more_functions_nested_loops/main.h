#ifndef MAIN_H
#define MAIN_H
int _isupper(int c);
/**
 * _isupper - A function the returns 1 or 0 if a character is uppercase or not
 * @c: The character to check
 * Return: An integer 1 or 0
 */

int _isdigit(int c);
/**
 * _isdigit - A function that returns 1 or 0 if a character is a digit or not
 * @c: The character to be checked
 * Return: int 0 or 1
 */
int mul(int a, int b);
/**
 * mul - A function that returns the product or 2 numbers
 * @a: First number
 * @b: second number to be multiplied
 * Return: int products of a and b
 */

int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void print_numbers(void);
/**
 * print_numbers - Prints numbers from 0 through 9
 * Return: void
 */


void print_most_numbers(void);
/**
 * print_most_numbers - Prints numbers from 0 through 9 except 2 and 4
 * Return: void
 */

void more_numbers(void);
/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 * Return: void
 */

void print_line(int n);
/**
 * print_line - A function that print lines with _
 * @n: The number of '_' to print
 * Return: void
 */

void print_diagonal(int n);
/**
 * print_diagonal - A function that print lines with \
 * @n: The number of '\' to print
 * Return: void
 */

void print_square(int size);

/**
 * print_square - A function that prints '#' a certain number of times
 * @size: Number of times to print '#'
 * Return: void
 */


void print_triangle(int size);
/**
 * print_triangle - A function that print '#' in form of a triangle
 * @size: The size of the triangle
 * Return: void
 */

void print_number(int n);
/**
 * print_number - A function that prints integer n
 * @n: integer to be printed
 * Return: void
 */
#endif
