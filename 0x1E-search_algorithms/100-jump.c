#include "search_algos.h"
#include <math.h>

/**
  * jump_search - searches for a value in a sorted array of integers
  * using the Jump search algorithm
  * @array: size of the array
  * @size: size of the array
  * @value: list of value to search in
  * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int index, i, j, previous;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	i = (int)sqrt((double)size);
	j = 0;
	previous = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		j++;
		previous = index;
		index = j * i;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", previous, index);

	for (; previous <= index && previous < (int)size; previous++)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
