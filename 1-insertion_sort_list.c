#include "sort.h"

/**
 * insert_sort_list - Insertion sort
 * @list: Pointer list
 *
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *cursor;
  listint_t *back_cursor;
  listint_t *prev_cursor;

  if (list == NULL || *list == NULL)
    return;
  cursor = *list;
  cursor = cursor->next;
  while (cursor != NULL)
    {
      back_cursor = cursor;
      cursor = cursor->next;
      while (back_cursor->prev != NULL)
	{
	  prev_cursor = back_cursor->prev;
	  if (back_cursor->n < prev_cursor->n)
	    {
	      prev_cursor->next = back_cursor->next;
	      if (back_cursor->next != NULL)
		{
		  back_cursor->next->prev = prev_cursor;
		}
	      back_cursor->next = prev_cursor;
	      back_cursor->prev = prev_cursor->prev;
	      if (back_cursor->prev == NULL)
		{
		  *list = back_cursor;
		}
	      else
		prev_cursor->prev->next = back_cursor;
	      prev_cursor->prev = back_cursor;
	      print_list(*list);
	    }
	  else
	    break;
	}
    }
}
