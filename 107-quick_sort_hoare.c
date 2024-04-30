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
	i = low; /*init left index*/
	j = high;   /*init right index*/

	while (i < j)
	{
		/* find in the left side a element greater than the pivot*/
		while (arr[i] < pivot)
		{
			i++;
		}
		/* find in the right side a element small than the pivot*/
		while (arr[j] > pivot)
		{
			j--;
		}
		if (i < j)
		{
			swap(&arr[i], &arr[j]);
		    print_array(arr, size);
			i++;
			j--;
		}
	}
	return (j);

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
