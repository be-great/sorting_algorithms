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
* partition - partition the tree
* @arr: the array
* @low: the low partition
* @high: the high partition
* @size: the size of the orignal array
* Return: the partition return
*/
int partition(int *arr, int low, int high, int size)
{


	int pivot, i, j;

	i = low - 1;
	j = high + 1;


	pivot = arr[high];
	while (i < j)
	{
		do {
			i++;
		} while (arr[i] < pivot);
		do {
			j--;
		} while (arr[j] > pivot);

		if (i < j)
		{
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}

	return (i);
}

/**
* tree - divide and conquer
* @arr: the array
* @low: the low partition
* @high: the high partition
* @size: the size the array
*/
void tree(int arr[], int low, int high, int size)
{
	int pi;

	if (high - low > 0)
	{
		pi = partition(arr, low, high, size);
		tree(arr, low, pi - 1, size);
		tree(arr, pi, high, size);
	}
}
/**
* quick_sort_hoare -  sorting algorithm for sorting large datasets
* @array: the array
* @size: the size of the array
*/
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	tree(array, 0, size - 1, size);
}
