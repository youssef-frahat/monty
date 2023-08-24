#include "monty.h"
/**
 * _pstr_ - displays the string starting at the top of the stack
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _pstr_(stack_t **h, unsigned int ct)
{
	stack_t *head;
	(void)ct;

	head = *h;
	while (head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
