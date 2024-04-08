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
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int p = array[high];
	int i = low;
	int c, t;

	for (c = low; c < high; c++)
	{
		if (array[c] < p)
		{
			t = array[i];
			array[i] = array[c];
			array[c] = t;

			if (t != array[i])
				print_array(array, size);
			++i;
		}
	}
	t = array[i];
	array[i] = array[high];
	array[high] = t;

	if (t != array[i])
		print_array(array, size);

	return (i);
}
/**
 * quick_sort_- recursively sorts array
 * @array: pointer to array
 * @low: starting
 * @high: ending
 */
void quick_sort_r(int *array, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = lomuto_partition(array, low, high, size);
		quick_sort_r(array, low, part - 1, size);
		quick_sort_r(array, part + 1, high, size);
	}
}
