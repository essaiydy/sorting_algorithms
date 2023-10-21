#include "sort.h"

/**
 * selection_sort - A function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: An array
 * @size: Size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				k = j;
			}
		}
		if (min != array[i])
		{
			array[k] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
