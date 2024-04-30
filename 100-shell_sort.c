#include "sort.h"

/**
* shell_sort - sorting algorithm for medium dataset using shell sort
* @array: the array to be sorted
* @size: the size of the array
*/
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	gap = 1;
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
		    array[j] = temp;

		}
		gap /= 3;
		print_array(array, size);
	}

}
