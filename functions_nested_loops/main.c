#include "main.h"  // Include the header file with function prototypes

/* Main function */
int main(void)
{
    int result = add(5, 3);  // Calling the 'add' function
    _putchar(result + '0');   // Print the result (convert to char and print)
    return 0;
}

/* Function definitions */
int add(int a, int b)
{
    return a + b;  // Add the two numbers and return the result
}
