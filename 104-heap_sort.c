#include "sort.h"
#include <limits.h>

/**
 * swiftdown - ...
 * @array: Pointer to array
 * @size_init: Original size of the array
 * @size: Size of the pointer
 * @i: Index as a root of the tree
 */
void swiftdown(int *array, size_t size_init, size_t size, size_t i)
{
	int n, branch1, branch2;
	size_t br1, br2;

	while ((br1 = i * 2 + 1) < size)
	{
		br2 = br1 + 1;
		branch1 = array[br1];
		branch2 = (br2 < size) ? array[br2] : INT_MIN;

		if (branch1 >= branch2 && branch1 > array[i])
		{
			n = array[i];
			array[i] = branch1;
			array[br1] = n;
			print_array(array, size_init);
			i = br1;
		}
		else if (branch2 > branch1 && branch2 > array[i])
		{
			n = array[i];
			array[i] = branch2;
			array[br2] = n;
			print_array(array, size_init);
			i = br2;
		}
		else
			break;
	}
}

/**
 * heap_sort - Sorts an array of integers in ascending order using the Heap
 * sort algorithm.
 * @array: Pointer to array
 * @size: Size of the pointer
 */
void heap_sort(int *array, size_t size)
{
	size_t i, size_init = size;
	int n;

	if (!array)
		return;
	for (i = size / 2; i > 0; i--)
		swiftdown(array, size_init, size, i - 1);
	i = size - 1;
	while (i > 0)
	{
		n = array[0];
		array[0] = array[i];
		array[i] = n;
		print_array(array, size_init);
		swiftdown(array, size_init, i, 0);
		i--;
	}
}
