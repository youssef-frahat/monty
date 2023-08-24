#include "monty.h"
/**
 * _push_ - adds to the stack a node
 * @h: head of stack
 * @ct: number's line
 * Return: nothing
*/
void _push_(stack_t **h, unsigned int ct)
{
	int m, i = 0, fg = 0;

	if (buss.arg)
	{
		if (buss.arg[0] == '-')
			i++;
		for (; buss.arg[i] != '\0'; i++)
		{
			if (buss.arg[i] > 57 || buss.arg[i] < 48)
				fg = 1; }
		if (fg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", ct);
			fclose(buss.file);
			free(buss.cont);
			freeStack(*h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", ct);
		fclose(buss.file);
		free(buss.cont);
		freeStack(*h);
		exit(EXIT_FAILURE); }
	m = atoi(buss.arg);
	if (buss.lf == 0)
		addNode(h, m);
	else
		addQueue(h, m);
}
