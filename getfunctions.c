#include "monty.h"
/**
 * getfunction - Use the first token of the main to search for a function.
 * @token: Pointer to token
 * Return: A pointer to a function.
 */
int getfunction(char *txt, stack_t **stack, unsigned int line)
{
	char *token;
	char *token2;
	int i;
	
	token = strtok(txt, " \t\n\r");
	if (token == NULL)
		return (0);
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

	for (i = 0; array[i].opcode != NULL; i++)
	{
		if (strcmp(token, array[i].opcode) == 0)
		{
			if (i == 0)
			{
				token2 = strtok(NULL, " \t\n\r");
		/** si token 2 no existe, te estan pasando push sin un numero*/
				getdata(token2);
			}
			array[i].f(stack, line);
			data = 0;
			return (0);
		}
	}
	return (-1);
}
