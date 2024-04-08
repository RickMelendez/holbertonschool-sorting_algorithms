#include "sort.h"
#include "lomus.c"
/**
 * quick_sort- sorts
 * @array: pointer to array
 * @size: number of elements
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_r(array, 0, size - 1, size);
}
