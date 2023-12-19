#include "sort.h"

/**
 * swapValue - Function that swaps integer
 * @int1: The First integer to be swapped
 * @int2: The Second integer to be swapped
 *
 * Return: Nothing
 */

void swapValue(int *int1, int *int2)
{
	int a = 0;

	a = *int1;
	*int1 = *int2;
	*int2 = a;

}

/**
 * selection_sort - Fuction that swaps sort an array of
 * integer using selection sort algorithms
 *
 * @array: The of integer to be sorted
 * @size: The total number of the indexes
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swapValue(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
