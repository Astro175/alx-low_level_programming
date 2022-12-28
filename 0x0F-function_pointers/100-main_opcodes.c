#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the number of Opcodes in the main function
 * @argv: array of strings
 * @argc: number of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (1);
	}

	main_addr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_addr[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}

	return (0);
}
