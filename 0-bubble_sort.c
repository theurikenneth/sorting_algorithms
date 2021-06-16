#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the BUbble sort algorithm
 * @array: The array of integers to sort
 * @size: The size of the array of integers
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
  int tmp;
  size_t i, j;

  if (array == NULL || size == 0)
    return;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size - 1; j++)
	{
	  if (array[j] > array[j + 1])
	    {
	      tmp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = tmp;
	      print_array(array, size);
	    }
	}
    }
}
