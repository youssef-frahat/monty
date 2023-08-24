#include "monty.h"
/**
 * addNode - adds node to the head stack
 * @h: head of stack
 * @m: the new value
 * Return: nothing
*/
void addNode(stack_t **h, int m)
{

	stack_t *newNode, *au;

	au = *h;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (au)
		au->prev = newNode;
	newNode->n = m;
	newNode->next = *h;
	newNode->prev = NULL;
	*h = newNode;
}
