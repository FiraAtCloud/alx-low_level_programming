#include "main.h"
/**
*swap_int - this function will swap any two numbers
*@a: a number to be swaped
*@b: a number to be swaped
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
