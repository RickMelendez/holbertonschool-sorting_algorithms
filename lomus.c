#include "sort.h"
/**
 * swap- swaps two int
 * @a: int
 * @b: int
 */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
/**
 * lomuto_partition- for quick sort
 * @array: pointer to array
 * @low: starting
 * @high: ending
 * Return: index
 */
int lomuto_partition(int *array, int low, int high)
{
	int p = array[high];
	int i = low - 1;
	int c;

	for (c = low; c <= high - 1; c++)
	{
		if (array[c] < p)
		{
			i++;
			if (i != c)
			{
				swap(&array[i], &array[c]);
				print_array(array, high + 1);
			}
		}
	}
	if ((i + 1) != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, high + 1);
	}
	return (i + 1);
}
/**
 * quick_sort_- recursively sorts array
 * @array: pointer to array
 * @low: starting
 * @high: ending
 */
void quick_sort_r(int *array, int low, int high)
{
	if (low < high)
	{
		int partition_index = lomuto_partition(array, low, high);
		quick_sort_r(array, low, partition_index - 1);
		quick_sort_r(array, partition_index + 1, high);
	}
}
