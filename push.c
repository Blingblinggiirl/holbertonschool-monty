#include "monty.h"
/**
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *n_node;
	n_node=malloc(sizeof(stack_t));
	n_node->prev=NULL;
	n_node->next=NULL;
	n_node->n=value;

	if (!(*stack_t))
		*stack = n_node;
