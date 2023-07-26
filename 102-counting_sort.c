#include "sort.h"
/**
 * counting_sort - Sorts an array of integers using Counting sort.
 * @array: Pointer to the array.
 * @size: Size of the array.
 **/
void counting_sort(int *array, size_t size)
{
	int n, j, *temp, *count_array;
	size_t i;

	if (!array || size < 2)
		return;
	n = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > n)
			n = array[i];
	}
	*count_array = calloc((n + 1), sizeof(int));
	for (i = 0; i < size; i++)
		count_array[array[i]]++;
	for (j = 1; j <= n; j++)
		count_array[j] += count_array[j - 1];
	print_array(count_array, n + 1);
	temp = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		count_array[array[i]]--;
		temp[count_array[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
		array[i] = temp[i];
	free(temp);
	free(count_array);
}
