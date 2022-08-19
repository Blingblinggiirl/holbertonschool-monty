#include "monty.h"
int data = 0;

/**
 * main - function
 * @argc: counter
 * @argv: argument
 * Return: int
 */

int main(int argc, char **argv)
{
	FILE *file;
	char *txt = NULL, *token = NULL;
	size_t size = 0;
	int line = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&txt, &size, file) != -1)
	{
		line++;
		if (getfunction(txt, &stack, line) == -1)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line, token);
			exit(EXIT_FAILURE);
		}
	}
}
