#include "sort.h"

/**
 * partition - function that partitions an array
 * @array: pointer to array of integers to be partitioned
 * @size: number of integers in array
 * @beg: start of array
 * @end: end of array
 * Return: The partion index
 */

int partition(int *array, int beg, int end, int size)
{
	int pivot = array[end];
	int partition_index = beg;

	int i;
	int tmp;

	for (i = beg; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (partition_index != i)
			{
				tmp = array[partition_index];
				array[partition_index] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			partition_index++;
		}
	}
	if (partition_index != end)
	{
		tmp = array[partition_index];
		array[partition_index] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}
	return (partition_index);
}

/**
 * quickSort - function that sorts an array of integers using recursion
 * @array: pointer to array of integers to be sorted
 * @size: number of integers in array
 * @beg: start of array
 * @end: end of array
 * Return: No return
 */

void quickSort(int *array, int beg, int end, int size)
{
	int partion_index;

	if (beg < end)
	{
		partion_index = partition(array, beg, end, size);

		quickSort(array, beg, partion_index - 1, size);

		quickSort(array, partion_index + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the,
 * Quick sort sort algorithm.
 * @array: pointer to array of integers to be sorted
 * @size: number of integers in array
 *
 * Implement the Lomuto partition scheme.
 * The pivot should always be the last element of the partition being sorted.
 * Print the array after each time you swap two elements.
 *
 * Return: No return.
 */
void quick_sort(int *array, size_t size)
{
	/* An array does not need to be sorted if its size is less than 2*/
	if (!array || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
}
