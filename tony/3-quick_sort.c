#include "sort.h"

/**
 * partition_arr - This function partitions the given array and
 * sorts the pivot in correct position.
 * It uses the Lomuto partition scheme with last elem as pivot.
 * @arr: The array to be sorted.
 * @low: Starting point to begin sorting partition.
 * @high: End of partition.
 * @size: Size of entire array
 * Return: Location of pivot after sorting.
 */

int partition_arr(int low, int high, int *arr, size_t size)
{
	int i = low, j = high;
	int pivot = arr[high], tmp = 0;

	while (i < j)
	{
		/*Traverse array from ltr and rtl*/
		while (arr[i] < pivot && i < high)
			i++;
		while (arr[j] >= pivot && j > i)
			j--;

		if (i < j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			print_array(arr, size);
		}
	}
	if (high != j)
	{
		arr[high] = arr[j];
		arr[j] = pivot;
		print_array(arr, size);
	}
	return (j);
}

/**
 * q_sort - This function is called recursively to implement the
 * to implement the quick sort algorithm
 * @low: Starting point to begin sorting partition.
 * @high: End of partition.
 * @array: The array to be sorted.
 * @arr_size: Size of entire array
 */
void q_sort(int low, int high, int *array, size_t arr_size)
{
	int new_high = 0;

	if (low < high)
	{
		new_high = partition_arr(low, high, array, arr_size);
		q_sort(low, new_high - 1, array, arr_size);
		q_sort(new_high + 1, high, array, arr_size);
	}
}


/**
 * quick_sort - This function sorts an array of integers
 * in ascending order, using the Quick sort algorithm.
 * It uses the Lomuto partition scheme with last elem as pivot.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	q_sort(0, size - 1, array, size);
}
