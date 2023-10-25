#include "sort.h"

/**
 * shell_sort - A function
 * @array: An array
 * @size: The size of the array
*/

void shell_sort(int *array, size_t size)
{
	size_t n, i, k;
	int tmp;

	n = 1;
	while (n < size)
	{
		n = n * 3 + 1;
	}
	while (n)
	{
		for (i = 0; i < size; i++)
		{
			k = i;
			while (k < size)
			{
				while (k >= i && array[k] < array[i])
				{
					tmp = array[i];
					array[i] = array[k];
					array[k] = tmp;
					k -= n;
				}
				k += n;
			}
		}
		n = (n - 1) / 3;
		print_array(array, size);
	}
}
