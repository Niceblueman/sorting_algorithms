#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - ...
 * @array: The array of integer
 * @size: The size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int empty;
	int sorted = 0;

	if (!array || size == 0)
		return;
	while (!sorted)
	{
		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				empty = array[i];
				array[i] = array[i + 1];
				array[i + 1] = empty;
				print_array(array, size);
			}
		}
	}
}
