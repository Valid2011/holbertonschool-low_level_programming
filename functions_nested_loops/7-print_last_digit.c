#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number from which the last digit will be extracted.
 * 
 * Return: the last digit of the number.
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
    {
        n = -n;  /* Make the number positive if it is negative */
    }

    last_digit = n % 10;  /* Get the last digit of the number */
    
    _putchar('0' + last_digit);  /* Print the last digit */
    
    return (last_digit);  /* Return the last digit */
}
