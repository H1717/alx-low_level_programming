#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 * @h: The linked list_t list.
 * @elements: a counter var for size_t (nodes)
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
 size_t n = 0;

 while (h)
 {
 n++;
 h = h->next;
 }
 return (n);
}
