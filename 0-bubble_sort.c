#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
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
				printf("\n");

			}
		}
	}

}
