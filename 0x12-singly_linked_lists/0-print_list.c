#include <stdio.h>
#include "lists.h"


size_t print_list(const list_t *h)
{
	/* It count the size of the list*/
size_t count = 0;
while (h)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	count++;
	}
}
return (count);
}
