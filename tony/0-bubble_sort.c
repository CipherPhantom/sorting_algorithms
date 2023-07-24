#include "sort.h"

/**
 * bubble_sort - This function sorts an array of integers in ascending order,
 * using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmp = 0;
	char swapped = 0;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		if (!swapped)
			break;
	}
}
