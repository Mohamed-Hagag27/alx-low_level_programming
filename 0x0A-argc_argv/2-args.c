#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: always 0.
 * @argc: number of arguments.
 * @argv: string array containing the arguments.
 */
int main(int argc, char *argv[])
{
int i;
if (argc == 1)
printf("%s\n", argv[argc - 1]);
else
{
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
}

return (0);
}