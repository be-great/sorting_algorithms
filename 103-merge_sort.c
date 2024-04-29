#include "sort.h"

/**
* *_calloc - function that allocates memory for an array, using malloc
* @nmemb: num of elements
* @size:size of the array
* Return: pointer to the located empty memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	int len;

	int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);/*WRONG*/

	if (ptr == NULL)
		return (NULL);

	len = nmemb * size;

	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

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
* merge - partition the tree
* @arr: the array
* @low: the low partition
* @middem: the middem
* @high: the high partition
* @array_locate_left_right: they new array to locate
* description: 1- create arrayleft, arrayright
*               2- copy data to temp array left and right
*               3- merge left to the orignal array
*               4- merge right to the orignal array
* Return: the partition return
*/
void merge(int *arr, int low, int middem, int high,

		int *array_locate_left_right)
{
	int i, j, k;

	int lenleft, lenright;

	int *arrl, *arrr;

	lenleft = middem - low + 1;
	lenright = high - middem;
	arrl = &array_locate_left_right[0];
	arrr = &array_locate_left_right[lenright];

	for (i = 0; i < lenleft; i++)
		arrl[i] = arr[low + i];
	for (j = 0; j < lenright; j++)
		arrr[j] = arr[middem + 1 + j];
	i = 0, j = 0, k = low;
	/*merge the left side*/
	while (i < lenleft && j < lenright)
	{
		if (arrl[i] <= arrr[j])
			arr[k] = arrl[i], i++;
		else
			arr[k] = arrr[j], j++;
		k++;
	}
	/*merge the left side*/
	while (i < lenleft)
		arr[k] = arrl[i], i++, k++;
	/*merge the right side*/
	while (j < lenright)
		arr[k] = arrr[j], j++, k++;
	printf("[left]: ");
	print_array(arrl, i);
	printf("[right]: ");
	print_array(arrr, j);
	printf("[Done]: ");
	print_array(&arr[low], i + j);
}
/**
* tree - divide and conquer
* @arr: the array
* @low: the low partition
* @high: the high partition
* @array_locate_left_right: they new array to locate
*/
void tree(int arr[], int low, int high,

			int *array_locate_left_right)
{
	int middem;

	if ((low + high) % 2 == 0)
		middem = ((low + high) / 2) - 1;
	else
		middem = (low + high) / 2;
	if (middem >= low)
	{
		tree(arr, low, middem, array_locate_left_right);
		tree(arr, middem + 1, high, array_locate_left_right);
		printf("Merging...\n");
		merge(arr, low, middem, high, array_locate_left_right);

	}
}
/**
* merge_sort -  sorting algorithm for sorting large datasets
* @array: the array
* @size: the size of the array
*/
void merge_sort(int *array, size_t size)
{
	int *array_locate_left_right;

	if (array == NULL || size < 2)
		return;
	array_locate_left_right = _calloc(size, sizeof(int));
	tree(array, 0, size - 1, array_locate_left_right);
}
