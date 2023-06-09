#include "main.h"
#include <stdio.h>

/**
 * main - main function.
 * @argc: number of arguments entered
 * @argv: array containing list of the arguments entered
 * Return: always zero
 */

int main(int argc, char *argv[])
{
if (argc < 0)
{
return (0);
}
printf("%s\n", argv[0]);
return (0);
}
