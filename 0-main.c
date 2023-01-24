#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    j = 0;
    for (i = 0; i < size; i++)
    {
        if (array[i] > array[i + 1])
        {
            j = array[i];
            array[i + 1] = array[i];
            array[i] = j;
        }
        print_array(array, size);
    }
}

void print_array(const int *array, size_t size)
{
        size_t i;

        i = 0;
        while (array && i < size)
        {
                if (i > 0)
                        printf(", ");
                printf("%d", array[i]);
                ++i;
        }
        printf("\n");
}

/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);
	printf("%ld\n", n);
	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
