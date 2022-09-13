#include "main.h"
/**
 * print_sign - this function will display the sign of a number
 * @n: the int to be checked
 * Return: this returns 1 and displays + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
} else if (n == 0)
{
_putchar(48);
return (0);
} else if (n < 0)
{
_putchar('-');
}
return (-1);
}
