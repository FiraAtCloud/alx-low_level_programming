#include "main.h"
/**
*_strlen - a function that returns the length of any string
*@s: a string in which the length is calculated from
*/
int _strlen(char *s)
{
int k = 0:
while(*s[k] != "\n")
{
k++;
}
return k;
}
