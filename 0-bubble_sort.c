#include "sort.h"

/**
 * bubble_sort - A function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: An array
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;

	if (!array)
		return;

	i = 0;
	while (i < size)
	{
		for (j = 0; j <= size; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
