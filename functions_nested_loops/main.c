#include "main.h"
#include <stdio.h>
#include <limits.h>  /* To use INT_MAX and INT_MIN */

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);  /* Should print 8 */
    _putchar('0' + r);  /* Convert the result to a character and print */
    _putchar('\n');

    r = print_last_digit(0);   /* Should print 0 */
    _putchar('0' + r);
    _putchar('\n');

    r = print_last_digit(-1024); /* Should print 4 */
    _putchar('0' + r);
    _putchar('\n');

    r = print_last_digit(INT_MAX); /* Should print 7 (last digit of INT_MAX) */
    _putchar('0' + r);
    _putchar('\n');

    r = print_last_digit(INT_MIN); /* Should print 8 (last digit of INT_MIN) */
    _putchar('0' + r);
    _putchar('\n');

    r = print_last_digit(1);     /* Should print 1 */
    _putchar('0' + r);
    _putchar('\n');

    return (0);
}
