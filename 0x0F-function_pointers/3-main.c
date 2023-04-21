#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function.
 * @argc: number of arguments.
 * @argv: array of the arguments.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_function)(int, int);
if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
if (argc < 4 || argv[1] == NULL || argv[3] == NULL)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_function = get_op_func(argv[2]);
if (op_function == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
result = op_function(num1, num2);
printf("%d\n", result);
return (0);
}