#include "sort.h"

/**
 * swap - function that swaps the value of two integers
 * @first: pointer to the first integer
 * @second: pointer to the second integer
 **/

void swap(int *first, int *second)
{
	int tmp = *first;
	*first = *second;
	*second = tmp;
}

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: numbers to be sorted
 * @size: number of i nntegers in array
 **/

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t c;

	for (i = 0; i < size - 1; i++)
	{
		size_t index_min = i;

		for (j = 0; j < size; j++)
		{
			if (array[j] < array[index_min])
			{
				index_min = j;
			}
		}

		swap(&array[index_min], &array[i]);
		for (c = 0; c < size; c++)
		{
			printf("%d", array[c]);
			if (c < size - 1)
				printf(", ");
			else
				printf("\n");
		}
	}
}
