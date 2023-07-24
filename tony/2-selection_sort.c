#include "sort.h"

/**
 * selection_sort - This function sorts an array of integers in ascending order,
 * using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, smallest_index = 0;
	int tmp = 0;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		smallest_index = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[smallest_index])
				smallest_index = j;
			if (j + 1 == size && smallest_index != i)
			{
				tmp = array[smallest_index];
				array[smallest_index] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
