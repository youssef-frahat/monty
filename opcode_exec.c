#include "monty.h"
/**
* op_exec - executes the opcode
* @st: head of stack
* @ct: number's line
* @file: address to the file
* @cont: content of line
* Return: no return
*/
int op_exec(char *cont, stack_t **st, unsigned int ct, FILE *file)
{
	instruction_t op_st[] = {
				{"push", _push_}, {"pall", _pall_}, {"pint", _pint_},
				{"pop", _pop_},
				{"swap", _swap_},
				{"add", _add_},
				{"nop", _nop_},
				{"sub", _sub_},
				{"div", _div_},
				{"mul", _mul_},
				{"mod", _mod_},
				{"pchar", _pchar_},
				{"pstr", _pstr_},
				{"rotl", _rotl_},
				{"rotr", _rotr_},
				{"queue", _queue_},
				{"stack", _stack_},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *opc;

	opc = strtok(cont, " \n\t");
	if (opc && opc[0] == '#')
		return (0);
	buss.arg = strtok(NULL, " \n\t");
	while (op_st[k].opcode && opc)
	{
		if (strcmp(opc, op_st[k].opcode) == 0)
		{	op_st[k].f(st, ct);
			return (0);
		}
		k++;
	}
	if (opc && op_st[k].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", ct, opc);
		fclose(file);
		free(cont);
		freeStack(*st);
		exit(EXIT_FAILURE); }
	return (1);
}
