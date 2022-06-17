#include "main.h"

/**
* _strcmp - compares two strings
*@s1: string
*@s2: string
*Return: positive or negative or 0
*/

int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
return (*s1 - *s2);
}
