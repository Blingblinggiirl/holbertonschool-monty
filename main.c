#includei"monty.h"
/**
 *
 * (
 */
int main(int argc, char **argv)
{
	FILE *file
	char *txt = NULL, *token = NULL;
	size_t size = 0; 
	int i;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		perror("USAGE: monty file");
		exit (EXIT_FAILURE);
	}

	file = fopen(argv[1], 'r');
	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
I
	while (getline(&txt, &size, file) != -1)
	{
		token = strtok(txt, " \t\n\r");
		if (token == NULL)
			continue;
		function = getfunction(token);
		if (function)
		{
			(*function)(&stack, i = 0);
			if (status == 1)
				break;
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", i, token);
			status = 1;
			break;
		}







		
	}

}
