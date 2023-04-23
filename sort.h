#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list
 *
 * @n: Integer stored
 * @next: Pointer next
 * @prev: Pointer previous
 */
typedef struct listint_s
{
  const int n;
  struct listint_s *prev;
  struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_really(int *array, size_t size, int *whole_array,
		       size_t full_size);
size_t partitioner(int *array, size_t size, int *whole_array, size_t);
#endif
