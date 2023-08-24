#include "monty.h"
/**
 * _add_ - sums the top two stack's elements
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _add_(stack_t **h, unsigned int ct)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	au = head->n + head->next->n;
	head->next->n = au;
	*h = head->next;
	free(head);
}

/**
  *_sub_ - susbtracts the top two stack's elements
  *@h: the head of stack
  *@ct: number of a line
  *Return: nothing
 */
void _sub_(stack_t **h, unsigned int ct)
{
	stack_t *au;
	int _sus, _nodes;

	au = *h;
	_nodes = 0;
	while (au != NULL)
	{
		au = au->next;
		_nodes++;
	}
	if (_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	au = *h;
	_sus = au->next->n - au->n;
	au->next->n = _sus;
	*h = au->next;
	free(au);
}
