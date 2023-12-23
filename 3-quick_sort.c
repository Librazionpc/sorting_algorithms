#include "sort.h"

/**
 * swapValue - that swaps interger
 * @int1: the First integer to be swapped
 * @int2: the Second integer to be swapped
 *
 * Return: Nothing
 */
int swapValue(int *int1, int *int2)
{
	int a = 0;

	if (*int1 == *int2)
		return (0);
	a = *int1;
	*int1 = *int2;
	*int2 = a;
	return (1);
}
/**
 * partition - function that splits array according to its pivot
 *
 * @array: the array to be worked on
 * @beging: the beggining of the array
 * @end: the end of the segmented array (courtesy the pivot)
 * @size: the size of the array for the print_array function
 *
 * Return: the pivot
 */

int partition(int *array, int beging, int end, int size)
{
	int pivot, i, j, res;

	pivot = array[end];
	i = beging - 1;

	for (j = beging; j <= end - 1; j++)
	{
		if (array[j] < pivot && array[i] != array[j])
		{
			i++;
			res = swapValue(&array[i], &array[j]);
			if (i != j && res == 1)
				print_array(array, size);
		}
	}
	res = swapValue(&array[i + 1], &array[end]);
	if (i + 1 != end && res == 1)
		print_array(array, size);

	return (i + 1);
}

/**
 * lomuto - function that perform lumutoo scheme
 *
 * @array: the array to be worked on
 * @beging: the beggining of the array
 * @end: the end of the segmented array (courtesy the pivot)
 * @size: the lenght of the array for the print_array function
 *
 * Return: Nothing
 */

void lomuto(int *array, int beging, int end, int size)
{
	int pivot;

	if (beging < end)
	{
		pivot = partition(array, beging, end, size);

		lomuto(array, beging, pivot - 1, size);

		lomuto(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - function that applys quick sort algorithm for array
 * (courtesy c programming language)
 *
 * @array: the interger to be worked on (sorted)
 * @size: lenght of the array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	lomuto(array, 0, size - 1, size);
}
