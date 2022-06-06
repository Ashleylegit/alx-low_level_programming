#include <stdio.h>

/**
 *main - outputs lowercase alphabet.
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 97; n < 123; n = n + 1)
{
putchar(n);
}
putchar('\n');
return (0);
}
