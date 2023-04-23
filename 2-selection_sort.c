#include "sort.h"

/**
 * selection_sort - Find the lowest number and put it in front
 * @array: Array to sort
 * @size: Size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
  size_t i = 0;
  size_t n;
  int swapped;
  int n_min;
  int compare;
  int tmp;

  if (array == NULL)
    return;
  while (i < size)
    {
      n = i;
      compare = array[i];
      swapped = 0;
      while (n < size)
	{
	  if (compare > array[n])
	    {
	      compare = array[n];
	      n_min = n;
	      swapped = 1;
	    }
	  n++;
	}
      if (swapped == 1)
	{
	  tmp = array[i];
	  array[i] = compare;
	  array[n_min] = tmp;
	  print_array(array, size);
	}
      i++;
    }
}
