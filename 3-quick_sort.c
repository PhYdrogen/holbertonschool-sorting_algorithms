#include "sort.h"

int loop = 0;
/**
 * swap - swaping two number
 * @i: number 1
 * @j: number 2
 * Return: none
 */
void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * partition - swap and mix
 * @array: the array
 * @bas: lower value
 * @haut: higher value
 * @size: the size for print
 * Return: the pivot
 */
int partition(int *array, int bas, int haut, int size)
{
	int pivot = array[haut], i = bas, j = bas;

	for (; j < haut; ++j)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			++i;
		}
	}
	if (loop != 0)
		print_array(array, size);

	loop++;
	swap(&array[i], &array[haut]);
	if (loop == 1)
		print_array(array, size);


	return (i);
}
/**
 * quick_sort_xd - to call my recursive fnc
 * @array: the array
 * @low: lower value
 * @high: higher value
 * @size: the size for print
 */
void quick_sort_xd(int *array, int low, int high, int size)
{
	int pivot = 0;

	if (low > high)
	{
		return;
	}

	pivot = partition(array, low, high, size);
	quick_sort_xd(array, low, pivot - 1, size);
	quick_sort_xd(array, pivot + 1, high, size);

}
/**
 * quick_sort - to call my recursive fnc
 * @array: the array
 * @size: the size for print
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL || size <= 1)
		return;

	quick_sort_xd(array, low, high, size);
	print_array(array, size);
}
