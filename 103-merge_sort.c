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
* merge - partition the tree
* @arr: the array
* @low: the low partition
* @middem: the middem
* @high: the high partition
* @size: the size of the orignal array
* @description: 1- create arrayleft, arrayright
*               2- copy data to temp array left and right
*               3- merge left to the orignal array
*               4- merge right to the orignal array
* Return: the partition return
*/
int merge(int *arr, int low, int middem, int high, int size)
{
    int i, j, k;
    int lenleft, lenright;
    int *arrl, *arrr;

    lenleft = middem - low + 1;
    lenright = high - middem;
    arrl = malloc(sizeof(int) *lenleft);
    arrr = malloc(sizeof(int) *lenright);

    for (i = 0; i < lenleft; i++)
        arrl[i] = arr[low + i];
    for (j = 0; j < lenright; j++)
        arrr[j] = arr[middem + 1+ j];
    
    i = 0;
    j = 0;
    k = low;
    /*merge the left side*/
    while (i < lenleft && j < lenright)
    {
        if (arrl[i] >= arrr[j])
        {
            arr[k] = arrr[j];
            j++;
        }
        else
        {
          arr[k] = arrl[i];
          i++;
        }
        k++;
    }
    /*merge the left side*/
    while (i < lenleft)
    {
        arr[k] = arrl[i];
        i++;
    }

    /*merge the right side*/
    while (j < lenright)
    {
        arr[k] = arrr[j];
        j++;
    }




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
		int middem = low + (high - low)/ 2;


		tree(arr, low, middem,size);
		tree(arr, middem + 1, high, size);
        merge(arr, low, middem, high, size);
	}
}
/**
* merge_sort -  sorting algorithm for sorting large datasets
* @array: the array
* @size: the size of the array
*/
void merge_sort(int *array, size_t size)
{
	tree(array, 0, size - 1, size);
}
