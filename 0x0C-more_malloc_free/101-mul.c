#include <stdlib.h>
#include <stdio.h>

/**
 * mul - multiplies two numbers
 * @num1: first integer
 * @num2: second integer
 * Return: result
 */

int *mul(int num1, int num2)
{
	int *multiply = malloc(sizeof(int));
	if (multiply == NULL)
		return (NULL);
	*multiply = num1 * num2;

	return (multiply);
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, num1, num2;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = mul(num1, num2);
	printf("%d\n", *result);

	return (0);
}

