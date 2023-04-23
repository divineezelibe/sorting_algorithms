#include <stdio.h>
#include <stdlib.h>
#include "sort.h" 

/**
 * bubble_sort - Sort all elements of an array
 * @array: Target array
 * @size: Size
 */

void bubble_sort(int *array, size_t size)
{
  size_t j;
  int swapped;
  size_t tmp;
  size_t tmpsize;

  if (array == NULL)
    return;
  tmpsize = size;
  swapped = 1;
  while (swapped)
    {
      swapped = 0;
      j = 0;
      while (j < tmpsize - 1)
	{
	  if (array[j] > array[j + 1])
	    {
	      tmp = array[j + 1];
	      array[j + 1] = array[j];
	      array[j] = tmp;
	      print_array(array, size);
	      swapped = 1;
	    }
	  j++;
	}
      tmpsize = j;
    }
}
