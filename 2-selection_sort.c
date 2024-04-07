#include "sort.h"
/**
 * selection_sort- sorts an array in order
 * @array: pointer
 * @size: number of elements
 */
void selection_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	for (size_t i = 0; i < size - 1; i++)
	{
		size_t min_index = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			int tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;

			print_array(array, size);
		}
	}
}
