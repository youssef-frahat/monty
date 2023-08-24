#include "monty.h"
/**
 * _swap_ - swaps the top two elements of the stack.
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _swap_(stack_t **h, unsigned int ct)
{
	stack_t *head;
	int length = 0, au;

	head = *h;
	while (head)
	{
		head = head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	au = head->n;
	head->n = head->next->n;
	head->next->n = au;
}
