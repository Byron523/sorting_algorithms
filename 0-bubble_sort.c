#include "sort.h"

/**
* bubble_sort - sorts a list using bubble sort algorithm
* @array: list of integers to be sorted
* @size: average of the array
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, swap;

	if (size == 0 || size < 2)
		return;

	for (j = size, swap = 1; j > 0 && swap; n--)
	{
		swap = 0;
		for (i = 0; j > (i + 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
