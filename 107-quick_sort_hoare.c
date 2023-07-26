#include "sort.h"

/**
 * swap - ....
 * @array: The array.
 * @item1: Index of the first element to swap.
 * @item2: Index of the second element to swap.
 */
void swap(int *array, size_t item1, size_t item2)
{
	int temp = array[item1];

	array[item1] = array[item2];
	array[item2] = temp;
}

/**
 * hoare_partition - Hoare partition sorting scheme
 * implementation.
 * @array: The array to partition.
 * @first: Index of the first element.
 * @last: Index of the last element.
 * @size: Size of the array.
 *
 * Return: The position of the last element sorted.
 */
int hoare_partition(int *array, int first, int last, int size)
{
	int current = first - 1, finder = last + 1;
	int pivot = array[last];

	while (1)
	{
		while (array[++current] < pivot)
			continue;
		while (array[--finder] > pivot)
			continue;
		if (current >= finder)
			return (current);
		swap(array, current, finder);
		print_array(array, size);
	}
}

/**
 * quicksort - QuickSort algorithm implementation using
 * Hoare's partition scheme.
 * @array: The array to sort.
 * @first: Index of the first element.
 * @last: Index of the last element.
 * @size: Size of the array.
 */
void quicksort(int *array, size_t first, size_t last, int size)
{
	size_t position = 0;

	if (first < last)
	{
		position = hoare_partition(array, first, last, size);
		quicksort(array, first, position - 1, size);
		quicksort(array, position, last, size);
	}
}

/**
 * quick_sort_hoare - Prepares the terrain for the QuickSort algorithm.
 * @array: The array to sort.
 * @size: Size of the array.
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
