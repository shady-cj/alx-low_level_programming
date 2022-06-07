#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void print_alphabet(void);
/**
 * print_alphabet - prints the alphabet
 * @void: void
 * Return: void
 * Description: prints the alphabet
 */

void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * @void: void
 * Return: void
 * Description: prints the alphabet 10 times
 */

int _islower(int c);
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 * Description: checks for lowercase character
 * Example: _islower('a') = 1
 *         _islower('A') = 0
 */ 
#endif