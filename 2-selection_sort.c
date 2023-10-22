#include "sort.h"

/**
 * selection_sort - A function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: An array
 * @size: Size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, mino;
	int tmp;

	if (!size || !array)
		return;

	for (j = 0; j < size - 1; j++)
	{
		mino = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[mino])
				mino = i;
		}

		if (mino != j)
		{
			tmp = array[j];
			array[j] = array[mino];
			array[mino] = tmp;
			print_array(array, size);
		}
	}
}
