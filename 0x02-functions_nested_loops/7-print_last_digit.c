#include "main.h"
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;
    _putchar(last_digit + '0');
    return (last_digit);
}