#include "sort.h"
#include <stdio.h>
/**
 * swap - ...
 * @array: the array for swap him values.
 * @i: First index
 * @j: Second index
 * Return: Nothing
 */
void swap(int *array, int i, int j)
{
	int temp;

	if (array[i] != array[j])
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

/**
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h, i, j;

	if (size < 2)
		return;
	for (h = 1; h <= size / 3; h = h * 3 + 1)
		continue;
	for (; h >= 1; h /= 3)
	{
		for (i = h; i < size; i++)
		{
			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
			{
				swap(array, j, j - h);
			}
		}
		print_array(array, size);
	}
}
