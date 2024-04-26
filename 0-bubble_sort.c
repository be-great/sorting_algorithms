#include "sort.h"
/**
* swap - swap two elemant a, b
* @a: the first element
* @b: the second element
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

/**
* bubble_sort -  sorting algorithm for small sets of elements
* @array: the array
* @size: the size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		/* min 1 => becasue of the compare with the (j + 1) */
		/* min i => each interation will sort the right number of the list */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}

	}
}
