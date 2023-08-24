#include "monty.h"
/**
* freeStack - frees a staxk
* @h: stack's head
*/
void freeStack(stack_t *h)
{
	stack_t *au;

	au = h;
	while (h)
	{
		au = h->next;
		free(h);
		h = au;
	}
}
