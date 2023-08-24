#include "monty.h"
/**
 * _pop_ - displays the top
 * @h: stack head
 * @ct: number's line
 * Return: nothing
*/
void _pop_(stack_t **h, unsigned int ct)
{
	stack_t *head;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	*h = head->next;
	free(head);
}
