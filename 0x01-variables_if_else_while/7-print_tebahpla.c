#include <stdio.h>
/**
 * main - this function will display the lowercase alphabet in reverse,
 * followed by a new line
 * Return: this will return 0
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
