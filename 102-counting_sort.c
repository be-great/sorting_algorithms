#include "sort.h"


/**
* max_ - get the max number
* @array: The array to be printed
* @size: Number of elements in @array
* Return: the maximum num
*/

int max_(int *array, size_t size)
{
	size_t i;
	int m;

	m = array[0];

	for (i = 0; i < size; i++)
	{
		if (array[i] > m)
			m = array[i];
	}

	return (m);
}

/**
* counting_sort - sorting for large dataset with small interger range
* @array: The array to be printed
* @size: Number of elements in @array
*/
void counting_sort(int *array, size_t size)
{

	size_t i, m, len;
	int *count, *out;

	if (array == NULL || size < 2)
		return;

	m = max_(array, size);
	len = m + 1;
	/* locate the arrays*/
	count = malloc(sizeof(int) * (len));
	out = malloc(sizeof(int) * size);

	if (count == NULL || out == NULL)
		return;

	/*initlize the count array*/
	for (i = 0; i < len; i++)
		count[i] = 0;
	/*count each index from orginal array*/
	for (i = 0; i < size; i++)
		count[array[i]] += 1;
	/*sum with privous values*/
	for (i = 1; i < len; i++)
		count[i] += count[i - 1];
	print_array(array, len);
	/* calcualte the output the right position*/
	for (i = 0; i < size; i++)
	{
		out[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}
	/*transfer the ouput into the orignal array*/
	for (i = 0; i < size; i++)
		array[i] = out[i];
	free(count), free(out);
}
