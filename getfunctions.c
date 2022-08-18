#include "monty.h"
/**
 * getfunction - Use the first token of the main to search for a function.
 * @token: Pointer to token
 * Return: A pointer to a function.
 */
void (*getfunction(char *token))(stack_t **, unsigned int)
{
	instruction_t array[] = {
		{"push", opush},
		{"pall", opall},
		{"pint", opint},
		{"pop", opop},
		{"swap", oswap},
		{"add", oadd},
		{"nop", onop}
	};
	int i;
	if (token)
	{
		for (i = 0; i < 7; i++)
		{
			if (strcmp(token, array[i].opcode) == 0)
				return (array[i].f);
		}
	}
	return (NULL);
}
