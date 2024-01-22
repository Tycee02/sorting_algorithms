#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers that will be sorted
 * @size: number of an integers in array
 */

void bubble_sort(int *array, size_t size)
{
	size_t  a;
	int tmp;
	int swap = -1;

	if (size < 2)
		return;

	while (swap)
	{
		swap = 0;

		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				swap++;

				print_array(array, size);
			}
		}
	}
}
