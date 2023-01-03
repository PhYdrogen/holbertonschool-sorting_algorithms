#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - sorts an array of integer in ascending order
 * @array: array of integer
 * @size: the size of array
 *
 * Return: always 0
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int i, j;

	for (i = 0; i < ((int)size) - 1; i++)
	{
		for (j = 0; j < ((int)size) - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);

			}
		}
	}

}
