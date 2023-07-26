#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - ...
 * @array: The array
 * @size: The size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t step = 0, i, min_idx;
	int temp;

	while (step < size - 1)
	{
		i = step + 1;
		min_idx = step;
		while (i < size)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
			i++;
		}
		if (min_idx != step)
		{
			temp = array[step];
			array[step] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
		step++;
	}
}
