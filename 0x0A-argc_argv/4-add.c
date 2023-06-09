#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: zero or one
 */

int main(int argc, char *argv[])
{
  int sum = 0, i, j, length;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num  == 0)
{
length = strlen(argv[i]);
for(j = 0 ; j < length; j++)
{
if ((int) argv[i][j] != 48 )
{
printf("Error\n");
return (1);
}
}
}
if (num > 0)
sum += num;
}
printf("%d\n", sum);
return (0);
}
