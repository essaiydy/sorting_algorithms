#include "sort.h"

/**
 * quick_sort - A function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: An array
 * @size: The size of array
*/

void quick_sort(int *array, size_t size)
{
	recursion(array, 0, size, size);
}
/**
 * recursion - Helper function
 * @array: An array
 * @size: The size of array
 * @start: The first index to sort the array
 * @end: The last index to sort the array
 */
void recursion(int *array, int start, int end, size_t size)
{
	int idx_piv;

	if (start < end)
	{
		idx_piv = arr_divided(array, start, end, size);
		recursion(array, start, idx_piv, size);
		recursion(array, idx_piv + 1, end, size);
	}
}

/**
 * arr_divided - A function that swap elements
 * @array: An array
 * @size: The size of array
 * @start: The first index to sort the array
 * @end: The last index to sort the array
 * Return: The position of the index
 */
int arr_divided(int *array, int start, int end, size_t size)
{
	int holder, i, j;
	int piv = array[end - 1];

	j = start - 1;
	for (i = start; i < end; i++)
	{
		if (array[i] <= piv)
		{
			j += 1;
			if (i > j)
			{
				holder = array[j];
				array[j] = array[i];
				array[i] = holder;
				print_array(array, size);
			}
		}
	}
	return (j);
}
