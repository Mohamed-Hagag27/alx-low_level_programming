#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - main function
 * Return: always 0.
 * @argc: number of arguments.
 * @argv: string array containing the arguments.
 */
#include"main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i, j, length;
char* ptr;
int total = 0;
if (argc < 2)
printf("%d\n", 0);
else
{
for (i = 1; i < argc ; i++)
{
ptr = argv[i];
length = strlen(ptr);
for (j = 0; j < length; j++)
{
if (isdigit(*(ptr + j)) == 0)
{
printf("Error\n");
return (1);
}
}
total+= atoi(argv[i]);
}
printf("%d", total);
}
return (0);
}
