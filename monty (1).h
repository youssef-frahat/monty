#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define  _POSIX_C_SOURCE 200809L
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct busS - struture of var, args, file, line 
 * @arg: value
 * @file: pointer to monty file
 * @cont: line content
 * @lf: flag to change stack/queue
 * Description: program's values carrier
 */
typedef struct stc_bus
{
	char *arg;
	FILE *file;
	char *cont;
	int lf;
}  bus_t;
extern bus_t buss;

/* Caluclation functioons */
/* 1 */
void _add_(stack_t **h, unsigned int ct);
void _sub_(stack_t **h, unsigned int ct);
/* 2 */
void _mul_(stack_t **h, unsigned int ct);
void _div_(stack_t **h, unsigned int ct);
/* 3 */
void _mod_(stack_t **h, unsigned int ct);

/* push-pall-pint functions */
void _push_(stack_t **h, unsigned int ct);
void _pall_(stack_t **h, unsigned int ct);
void _pint_(stack_t **h, unsigned int ct);

/* pop-swap-nop functions */
void _pop_(stack_t **h, unsigned int ct);
void _swap_(stack_t **h, unsigned int ct);
void _nop_(stack_t **h, unsigned int ct);

/* */
void addNode(stack_t **h, int m);

/* */
void _pchar_(stack_t **h, unsigned int ct);
void _pstr_(stack_t **h, unsigned int ct);

/* Roatation functions */
void _rotl_(stack_t **h,  __attribute__((unused)) unsigned int ct);
void _rotr_(stack_t **h, __attribute__((unused)) unsigned int ct);

/* stack-queue functions */
void _stack_(stack_t **h, unsigned int ct);
void _queue_(stack_t **h, unsigned int ct);
void addQueue(stack_t **h, int m);

/* */
void freeStack(stack_t *h);
int op_exec(char *cont, stack_t **st, unsigned int ct, FILE *file);

#endif
