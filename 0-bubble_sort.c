#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers that will be sorted
 * @size: number of an integers in array
 */

void bubble_sort(int *array, size_t size)
{
	size_t  i;
	int tmp;
	int swap;

	if (size < 2)
		return;

	while (swap)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap++;

				print_array(array, size);
			}
		}
	}
}
