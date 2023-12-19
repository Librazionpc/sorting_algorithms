#include "sort.h"
/**
 * swapValue - That swaps interger
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
 * bubble_sort - Function that uses bubble algorithm sort unordered integers
 * @array: The array of the integers
 * @size: Length of the integers
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t check = 0, i = 0;

	if (array == NULL)
		return;
	while (check != size - 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapValue(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
		if (array[check] < array[check + 1])
			check++;
	}
}
