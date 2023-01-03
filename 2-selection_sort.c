#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - to sort an array of integerin ascending order
 * @array: an array of integer
 * @size: size of an array
 *
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	int swap, position, i, j;
	for (i = 0; i < (((int)size) - 1); i++)
	{
		position = i;
		for (j = i + 1; j < ((int)size); j++)
		{
			if (array[position] > array[j])
				position = j;
		}
		if (position != i)
		{
			swap = array[i];
			array[i] = array[position];
			array[position] = swap;
			print_array(array, size);
		}
	}
}
