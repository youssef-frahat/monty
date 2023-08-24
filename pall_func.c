#include "monty.h"

/**
 * _pall_ - displays the stack
 * @h: head of stack
 * @ct: unused
 * Return: nothing
*/
void _pall_(stack_t **h, unsigned int ct)
{
	stack_t *head;
	(void)ct;

	head = *h;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
