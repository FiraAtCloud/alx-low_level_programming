#include <stdio.h>
/**
 * main - this function will display the characters in lowercase, and then in uppercase,
 * followed by a new line
 * Return: this will return 0
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
