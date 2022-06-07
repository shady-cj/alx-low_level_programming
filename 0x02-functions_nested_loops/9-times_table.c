#include "main.h"

void times_table(void)
{
    int i, j,mult;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mult = i * j;
            if (mult > 9){
                _putchar((mult / 10) + '0');
                _putchar((mult % 10) + '0');
            }
            else{
                _putchar(mult + '0');
            }
            if (j < 9){
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
            }
           
        }
        _putchar('\n');
    }
}