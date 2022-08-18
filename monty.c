#include"monty.h"
/**
 *
 * (
 */
int main(int argc, char **argv)
{
	FILE *file
	char *txt = NULL;
	size_t size = 0; 
	stack_t *stack;

	if (argc != 2)
	{
		perror("USAGE: monty file");
		exit (EXIT_FAILURE);
	}

	text = fopen(argv[1], 'r');
	if (!text)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
I
	while (getline(&txt; &size; f) != -1)
	{


		
	}

}
