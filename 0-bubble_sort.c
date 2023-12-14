#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @x: Pointer to the first integer to swap.
 * @y: Pointer to the second integer to swap.
 */
void swap_ints(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sorts an array of integers in
 * ascending order using Bubble Sort.
 *
 * @arr: Array of integers to be sorted.
 * @arr_size: Size of the array.
 *
 * Description: Prints the array after each swap operation.
 */
void bubble_sort(int *arr, size_t arr_size)
{
	size_t idx, len = arr_size;
	bool sorted = false;

	if (arr == NULL || arr_size < 2)
		return;

	while (sorted == false)
	{
		sorted = true;
		for (idx = 0; idx < len - 1; idx++)
		{
			if (arr[idx] > arr[idx + 1])
			{
				swap_ints(arr + idx, arr + idx + 1);
				print_array(arr, arr_size);
				sorted = false;
			}
		}
		len--;
	}
}
