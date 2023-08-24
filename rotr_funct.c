#include "monty.h"
/**
  *_rotr_ - rotates the stack to the bottom
  *@h: stack head
  *@ct: number's line
  *Return: nothing
 */
void _rotr_(stack_t **h, __attribute__((unused)) unsigned int ct)
{
	stack_t *c;

	c = *h;
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	while (c->next)
	{
		c = c->next;
	}
	c->next = *h;
	c->prev->next = NULL;
	c->prev = NULL;
	(*h)->prev = c;
	(*h) = c;
}
