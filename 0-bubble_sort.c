#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	int temp = 0;

			int i;
			for (i = 0; i < ((int)size) - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
				}

			}

}
