#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates an array of chars
 * @str: pointer

 *
 * Return: always 0.
 */
 int **alloc_grid(int width, int height)
 {
     int **grid;
     int i;

      if(width == 0)
    {
        return (NULL);
    }
     if(height == 0)
    {
        return (NULL);
    }
   
    grid = malloc(height * sizeof(int *));
    for(i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
    }
    return (grid);
 }