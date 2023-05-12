#include "search_algos.h"

/**
  * search_binary - Searches for a value in a sorted array
  *                  of integers using binary search
  * @array: A pointer to the first element of the array to search
  * @left: The starting index of the [sub]array to search
  * @right: The ending index of the [sub]array to search
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         Otherwise, the index where the value is located
  */

int search_binary(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t j = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (j = 1; j < size && array[j] <= value; j = j * 2)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}

	right = j < size ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, right);
	return (search_binary(array, j / 2, right, value));
}
