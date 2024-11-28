#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);      /* Test case 1: Start from 0 */
    print_to_98(98);     /* Test case 2: Start from 98 */
    print_to_98(111);    /* Test case 3: Start from a number greater than 98 */
    print_to_98(81);     /* Test case 4: Start from a number less than 98 */
    print_to_98(-10);    /* Test case 5: Start from a negative number */
    return (0);
}
