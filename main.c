#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
bus_t buss = {NULL, NULL, NULL, 0};
/**
* main -  interpreter
* @argc: arguments' number
* @argv: file's location
* Return: 0 always
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t s = 0;
	ssize_t readLine = 1;
	stack_t *st = NULL;
	unsigned int ct = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	buss.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readLine > 0)
	{
		cont = NULL;
		readLine = getline(&cont, &s, file);
		buss.cont = cont;
		ct++;
		if (readLine > 0)
		{
			op_exec(cont, &st, ct, file);
		}
		free(cont);
	}
	freeStack(st);
	fclose(file);
return (0);
}
