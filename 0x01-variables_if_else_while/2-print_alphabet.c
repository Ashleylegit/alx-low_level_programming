#include <stdio.h>
/**
* main - returns 0
*
* Description - main returns 0
* putchar - Prints each letter of the alphabet in lowercase
* Return: 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
