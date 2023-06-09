#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of the arguments
 * Return: always zero
 */

int main(int argc, char *argv[])
{
if (argv[0] == NULL)
{
return (0);
}
printf("%d\n", argc-1);
return (0);
}
