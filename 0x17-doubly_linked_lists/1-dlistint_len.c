#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
