#include <stdio.h>
/**

 * main - this function will display the characters in lowercase,

 * followed by a new line, without q and e

 * Return: this will return 0 
 */

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
