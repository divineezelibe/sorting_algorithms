#include "sort.h"

/**
 * quick_sort - Quick Sort
 * @array: Array argument
 * @size: Size
 *
 */
void quick_sort(int *array, size_t size)
{
  size_t f_size;
  int *all_list;

  if (array == NULL)
    return;
  all_list = &array[0];
  f_size = size;
  breaker_trigger(array, size, all_list, f_size);
}

/**
 * breaker -Split the array and swap large elements to the right and vice-versa
 * @array: Array argument
 * @size: Size argument
 * @all_list: Array argument to be sorted
 * @f_size: Size argument of array
 * Return: Array
 **/
size_t breaker(int *array, size_t size, int *all_list, size_t f_size)
{
  int spot;
  long front;
  long end;
  int tmp;

  spot = array[size - 1];
  front = -1;
  end = size;


  while (1)
    {
      do {
	front++;
      } while (array[front] < spot);
      do {
	end--;
      } while (array[end] > spot);

      if (front >= end)
	{
	  return ((size_t) front);
	}
      tmp = array[front];
      array[front] = array[end];
      array[end] = tmp;
      print_array(all_list, f_size);
    }
  return (end);
}

/**
 * breaker_trigger - Call brkeaer and get subs
 * @array: Array argument
 * @size: Size Arg
 * @all_list: Array
 * @f_size: The full size of the array that's being sorted originally
 **/
void breaker_trigger(int *array, size_t size, int *all_list, size_t f_size)
{
  size_t part;

  part = 0;

  if (size > 1)
    {
      part = breaker(array, size, all_list, f_size);
      breaker_trigger(&array[0], part, all_list, f_size);
      breaker_trigger(&array[part], size - part, all_list, f_size);
    }

}
