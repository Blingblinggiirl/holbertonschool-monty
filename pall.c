#include "monty.h"
/**
 * pall - prints all the values from the nodes in the stack
 * @stack: pointer to 1st node
 * @line_number: reads the line from the file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *h = *stack;
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
}
