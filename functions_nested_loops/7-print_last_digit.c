#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    if (n < 0)
    {
        n = -n;  /* Make the number positive if it is negative */
    }
    int last_digit = n % 10;  /* Get the last digit using modulus */
    
    _putchar('0' + last_digit);  /* Print the last digit by converting it to a character */
    
    return (last_digit);  /* Return the last digit */
}
