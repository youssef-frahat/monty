#include "monty.h"
/**
 * _queue_ - sets the format of the data to a queue
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _queue_(stack_t **h, unsigned int ct)
{
	(void)h;
	(void)ct;
	buss.lf = 1;
}

/**
 * addQueue - adds node to the stack's tail
 * @m: value
 * @h: head
 * Return: nothing
*/
void addQueue(stack_t **h, int m)
{
	stack_t *newNode, *au;

	au = *h;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = m;
	newNode->next = NULL;
	if (au)
	{
		while (au->next)
			au = au->next;
	}
	if (!au)
	{
		*h = newNode;
		newNode->prev = NULL;
	}
	else
	{
		au->next = newNode;
		newNode->prev = au;
	}
}
