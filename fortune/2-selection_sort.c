#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in
 * ascending order using the Selection sort algorithm.
 *
 * @array: An array of integers
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int tmp, swap = 0;

	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < tmp)
			{
				tmp = array[j];
				index = j;
				swap = 1;
			}
		}
		if (swap == 1)
		{
			tmp = array[index];
			array[index] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
