#include "main.h"
/**
 * _isalpha - this function checks for, whether an alphabet is character or not
 * @c: the character to be checked
 * Return: this will returns 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
