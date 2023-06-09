#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i;
if (argc < 2)
{
printf("%s\n", argv[0]);
return (0);
}
for (i = 0; i < argc ; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
