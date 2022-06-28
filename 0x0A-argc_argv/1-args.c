#include "main.h"
#include <stdio.h>

/**
*main - prints the number of arguments passed
*@argc: argument count
*@argv: argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{

int i;

for (i = 0; i < argc; i++)
{

*argv[i] = *argv[i];
}

printf("%d\n", (i - 1));
return (0);
}
