#include "sort.h"


void bubble_sort(int *array, size_t size)
{
	int tmp, isSorted = is_sorted(array, size);
	size_t i = 0;
	
	while (!isSorted)
	{
		while (i + 1 < size)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			i++;
		}
		isSorted = is_sorted(array, size);
		i = 0;
	}
}

int is_sorted(int *array, size_t size)
{
	size_t i = 0;

	while (i + 1 < size)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
