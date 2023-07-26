#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * copy - Copy buffer to another.
 * @src: Source buffer.
 * @dst: Destination buffer.
 * @size: Size of buffers.
 *
 * Return: void
 */
static void copy(int *src, int *dst, int size)
{
	int i;

	for (i = 0; i < size; i++)
		dst[i] = src[i];
}

/**
 * printcheck - Prints an array
 * @array: Array of data to be printed.
 * @r1: Start of range.
 * @r2: End of range.
 *
 * Return: void
 */
static void printcheck(int *array, int r1, int r2)
{
	int i;

	for (i = r1; i <= r2; i++)
	{
		if (i > r1)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * merge_sort - Sorts an array of integers using the Merge sort algorithm.
 * @array: The array of data to be sorted.
 * @size: Size of the array.
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int min, max, mid, tmax, lmin, lmax, rmin, rmax, *buff, step;

	if (size < 2)
		return;
	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;
	copy(array, buff, size);
	for (step = 1; step < size; step *= 2)
	{
		for (min = 0; min < (int)size - step; min = max + 1)
		{
			max = min + step * 2 - 1;
			if (max >= (int)size)
				max = size - 1;
			mid = min + step - 1;
			tmax = max;
			max = mid;
			lmin = min;
			lmax = max;
			min = mid + 1;
			max = tmax;
			rmin = min;
			rmax = max;
			printf("Merging...\n[left]: ");
			printcheck(array, lmin, lmax);
			printf("[right]: ");
			printcheck(array, rmin, rmax);
			merge(array, buff, lmin, lmax, rmin, rmax);
			copy(array, buff, size);
			printf("[Done]: ");
			printcheck(array, lmin, rmax);
		}
	}
	free(buff);
}
