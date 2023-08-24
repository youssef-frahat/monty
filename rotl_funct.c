#include "monty.h"
/**
  *_rotl_ - rotates the stack to the top
  *@h: head of stack
  *@ct: number's line
  *Return: nothing
 */
void _rotl_(stack_t **h,  __attribute__((unused)) unsigned int ct)
{
	stack_t *t = *h, *au;

	if (*h == NULL || ((*h)->next == NULL))
	{
		return;
	}
	au = (*h)->next;
	au->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *h;
	(*h)->next = NULL;
	(*h)->prev = t;
	(*h) = au;
}
