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
	/** you want to but the pivot position in 'i' + 1*/
	/* meaning :  i < pivot < i + 2*/
	int pivot, i, j;

	pivot = arr[high]; /* the last element*/
	i = low - 1;
	for (j = low; j <= high; j++) /* test it with j < high*/
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			if (arr[i] != arr[j])
				print_array(arr, size);
		}
	}
	/* now swap the pivot*/
	swap(&arr[i + 1], &arr[high]);
	if (arr[i + 1] != arr[high])
		print_array(arr, size);
	return (i + 1);

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
	if (low < high)
	{
		int pi;

		pi = partition(arr, low, high, size);
		tree(arr, low, pi - 1, size);
		tree(arr, pi + 1, high, size);
	}
}
/**
* quick_sort -  sorting algorithm for sorting large datasets
* @array: the array
* @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	tree(array, 0, size - 1, size);
}
