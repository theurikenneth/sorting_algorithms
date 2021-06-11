#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define INCREMENT 1
#define DECREMENT -1

/**
 * struct listint_c - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element o the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
  const int n;
  struct listint_s *prev;
  struct listint_s *next;
} listint_t;

void print_array(const int *, size_t);
void print_list(const listint_t *);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_rec(int *array, int lower, int higher, size_t size);
int lomuto_partition(int *array, int lower, int higher, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *node);
listint_t *get_dlistint_lelem(listint_t *h);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
int getCantRep(int num);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void myswapy(int *array, int i, int j);
int part(int *array, int left, int right, size_t size);
void myquicksort(int *array, int left, int right, size_t size);
void sort_deck(deck_node_t **deck);

#endif
