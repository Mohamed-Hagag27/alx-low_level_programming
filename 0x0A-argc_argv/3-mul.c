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
if (argc == 1)
printf("Error\n");
else
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int product = num1 * num2;
printf("%d\n", product);
}
return (0);
}
