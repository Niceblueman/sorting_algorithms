#include "sort.h"
#include <stddef.h>

/**
 * swap - ...
 * @array: The array to modify.
 * @l: The index of the left item.
 * @r: The index of the right item.
 */

void swap(int *array, size_t l, size_t r)
{
	int temp = array[l];

	array[l] = array[r];
	array[r] = temp;
}

/**
 * quick_sort - ...
 * @array: The array to sort.
 * @size: The length of the array.
 */

void quick_sort(int *array, size_t size)
{
	int h;
	size_t k, i;

	if (array == NULL || size <= 1)
		return;
	h = array[size - 1];
	k = 0;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] <= h)
		{
			if (k != i)
			{
				swap(array, k, i);
				print_array(array, size);
			}
			k++;
		}
	}
	swap(array, k, size - 1);
	print_array(array, size);
	quick_sort(array, k);
	quick_sort(&array[k + 1], size - k - 1);
}
