#include "monty.h"
/**
 * pall - prints all the values from the nodes in the stack
 * @stack: pointer to 1st node
 * @line_number: reads the line from the file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h = **stack;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
}
