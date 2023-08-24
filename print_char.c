#include "monty.h"
/**
 * _pchar_- displays the char at the top of the stack
 * @h: stack of the head
 * @ct: number's line
 * Return: nothing
*/
void _pchar_(stack_t **h, unsigned int ct)
{
	stack_t *head;

	head = *h;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	if (head->n > 127 || head->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
