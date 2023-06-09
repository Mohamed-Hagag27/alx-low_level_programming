#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 1 or zero
 */

int main(int argc, char *argv[])
{
int num1, num2, product = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);

num2 = atoi(argv[2]);

product *= num1;
product *= num2;
printf("%d\n", product);
return (0);
}
