#include "monty.h"
/**
 * push - agrega un nuevo nodo al principio del stack (arriba)
 * @stack: puntero que apunta al primer nodo
 * @line_number: linea que lee actualmente del archivo
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *n_node;

	n_node = malloc(sizeof(stack_t));
	if (!n_node)
	{
		dprintf(2, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	n_node->prev = NULL;
	n_node->next = NULL;
	n_node->n = value;

	if (!(*stack))
	{
		*stack = n_node;
		return;
	}
	(*stack)->prev = n_node;
	n_node->prev = *stack;
	*stack = n_node;
}
