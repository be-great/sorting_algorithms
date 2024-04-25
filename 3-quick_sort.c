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
* Return: the partition return
*/
int partition(int *arr, int low, int high)
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
		}
	}
	/* now swap the pivot*/
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);

}
/**
* tree - divide and conquer
* @arr: the array
* @low: the low partition
* @high: the high partition
*/
void tree(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi;

		pi = partition(arr, low, high);
		tree(arr, low, pi - 1);
		tree(arr, pi + 1, high);
	}
}
/**
* quick_sort -  sorting algorithm for sorting large datasets
* @array: the array
* @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
	tree(array, 0, size - 1);
}
