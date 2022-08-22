#include "monty.h"
/**
 * push - agrega un nuevo nodo al principio del stack (arriba)
 * @stack: puntero que apunta al primer nodo
 * @line_number: linea que lee actualmente del archivo
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *n_node;
	char *list_number;

	list_number = strtok(NULL," \n\t\r$");
	if (!list_number)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_list(*stack);
		exit(EXIT_FAILURE);
	}

	n_node = malloc(sizeof(stack_t));
	if (!n_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list(*stack);
		exit(EXIT_FAILURE);
	}

	n_node->n = atoi(list_number);
	n_node->next = *stack;
	n_node->prev = NULL;

	if ((*stack) != NULL)
	{
		(*stack)->prev = n_node;
	}
	(*stack) = n_node;
}
