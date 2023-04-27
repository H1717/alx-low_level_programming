#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - determines lentgh of linked list
  * @h: pointer to first node
  *
  * Return: size of list
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
