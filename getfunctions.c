#include "monty.h"
/**
 * getfunction - Use the first token of the main to search for a function.
 * @token: Pointer to token
 * Return: A pointer to a function.
 */
int getfunction(char *token, stack_t **stack, unsigned int line)
{
	instruction_t array[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
		/*{"pint", opint},
		{"pop", opop},
		{"swap", oswap},
		{"add", oadd},
		{"nop", onop}*/
	};
	int i;
	if (token)
	{
		for (i = 0; array[i].opcode != NULL; i++)
		{
			if (strcmp(token, array[i].opcode) == 0)
				array[i].f(stack, line);
		}
	}
	else
		return (-1);
}
