#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer whose absolute value is to be computed
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
    if (n < 0)
        return (-n);  /* Return the negation of n if it's negative */
    else
        return (n);   /* Return n if it's non-negative */
}
