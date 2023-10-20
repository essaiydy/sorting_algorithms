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

	if (size == 0 || size == 1)
		return;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
