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

int _isalpha(int c);
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 * Return: 1 if c is alphabetic, 0 otherwise
 * Description: checks for alphabetic character
 * Example: _isalpha('a') = 1
 *        _isalpha('A') = 1
 *       _isalpha('1') = 0
 */

int print_sign(int n);
/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 * Return: 1 if positive, 0 if zero, -1 if negative
 * Description: prints the sign of a number
 * Example: print_sign(0) = 0 prints 0
 *       print_sign(1) = 1 prints +
 *      print_sign(-1) = -1 prints -
 */ 
#endif