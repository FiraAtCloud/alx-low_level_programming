#include <stdio.h>
/**
 * main - this function will display the in lowercase,
 * followed by a new line
 * Return: this will return 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
