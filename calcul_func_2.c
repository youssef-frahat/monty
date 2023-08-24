#include "monty.h"
/**
 * _mul_ - calculates the mul of the top two stack's elms
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _mul_(stack_t **h, unsigned int ct)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	au = head->next->n * head->n;
	head->next->n = au;
	*h = head->next;
	free(head);
}


/**
 * _div_ - divides the top two stack's elements
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _div_(stack_t **h, unsigned int ct)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	au = head->next->n / head->n;
	head->next->n = au;
	*h = head->next;
	free(head);
}
