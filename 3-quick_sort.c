#include "sort.h"
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
	int tmp = 0, i = 0, j = 0, change = 0, printed = 0;
	int pivot = array[haut];

	i = bas - 1;
	if (i == 0)
	{
		print_array(array, size);
		printed = 1;
	}
	for (j = bas; j <= (haut - 1); j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			change++;
		}
	}
	if (change != 0 && printed == 0)
		print_array(array, size);
	i++;
	tmp = array[i];
	array[i] = array[haut];
	array[haut] = tmp;

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

	if (array == NULL || size < 1)
		return;

	quick_sort_xd(array, low, high, size);
	print_array(array, size);
}
