#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 * 
 * 
 * Return: int 
 */
int _islower(int c)
{
    if (islower(c))
    {
        return (1);
    }
    return (0);
}
