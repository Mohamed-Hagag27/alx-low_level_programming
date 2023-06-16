#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alooc_grid - creates 2d array of height and width
 * @width: no of coloumns
 * @height: no of rows
 * Return: NULL on failure while arr on success
 */

int **alloc_grid(int width, int height)
{
int i , j;
int **arr = NULL;
if (width <= 0 || height <= 0)
return (NULL);

arr = malloc( ((height * width) + 1) * sizeof(int));
if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);
}
