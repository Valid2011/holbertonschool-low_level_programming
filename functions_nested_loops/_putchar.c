#include <unistd.h>  // This allows us to use the "write" function to print

int _putchar(char c)
{
    return write(1, &c, 1);  // Prints the character 'c' to the screen
}
