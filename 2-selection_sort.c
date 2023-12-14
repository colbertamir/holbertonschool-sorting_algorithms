#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @first: Pointer to the first integer to swap.
 * @second: Pointer to the second integer to swap.
 */
void swap_integers(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @arr: An array of integers.
 * @arr_size: The size of the array.
 *
 * Description: Prints the array after each swap operation.
 */
void selection_sort(int *arr, size_t arr_size)
{
	int *minimum;
	size_t i, j;

	if (arr == NULL || arr_size < 2)
		return;

	for (i = 0; i < arr_size - 1; i++)
	{
		minimum = arr + i;
		for (j = i + 1; j < arr_size; j++)
			minimum = (arr[j] < *minimum) ? (arr + j) : minimum;

		if ((arr + i) != minimum)
		{
			swap_integers(arr + i, minimum);
			print_array(arr, arr_size);
		}
	}
}
