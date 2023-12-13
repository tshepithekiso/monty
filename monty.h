#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

 /**
  * struct stack_s - doubly linked list representation of a stack (or queue)
  * @n: integer
  * @prev: points to the previous element of the stack (or queue)
  * @next: points to the next element of the stack (or queue)
  *
  * Description: doubly linked list node structure
  * for stack, queues, LIFO, FIFO Holberton project
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

/*pull,pall.c */
void t_pall(stack_t **head, unsigned int counter);
void t_push(stack_t **head, unsigned int counter);

/* pint */
void t_pint(stack_t **head, unsigned int counter);

/* pop */
void t_pop(stack_t **head, unsigned int counter);

/* swap */
void t_swap(stack_t **head, unsigned int counter);

/* add */
void t_add(stack_t **head, unsigned int counter);

/* nop */
void t_nop(stack_t **head, unsigned int counter);

/* sub */
void t_sub(stack_t **head, unsigned int counter);
#endif
