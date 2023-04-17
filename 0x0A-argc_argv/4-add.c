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
int total = 0;
if (argc == 1)
printf("%d\n", 0);
else
{
for (i = 1; i < argc ; i++)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
total += atoi(argv[i]);
}
printf("%d\n", total);
}
return (0);
}
