#include "sort.h"
/**
 * bubble_sort - Function that uses bubble algorithm sort unordered integers
 * @array: The array of the integers
 * @size: Length of the integers
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t check = 0, i = 0, j;
	int val;

	if (array == NULL || size == 0)
		return;
	for (j = 0; j < size - 1; j++)
	{
		check = 0;
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				val = array[i];
				array[i] = array[i + 1];
				array[i + 1] = val;
				print_array(array, size);
				check = 1;
			}
		}
		if (check == 0)
			break;
	}
}
