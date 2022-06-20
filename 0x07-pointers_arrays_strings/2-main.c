#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "holberton!!!";
    char *f;

    f = _strchr(s, '\0');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
