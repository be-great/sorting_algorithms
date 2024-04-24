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

}
/**
* tree - divide and conquer
* @arr: the array
* @low: the low partition
* @high: the high partition
*/
void tree(int arr[], int low, int high)
{

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
