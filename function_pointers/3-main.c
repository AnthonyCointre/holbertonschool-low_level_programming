#include "3-calc.h"

/**
 * main - a
 * @argc: a
 * @argv: a
 *
 * Return: a
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char operator = argv[2][0];
	int num2 = atoi(argv[3]);

	for (int i = 0; ops[i].func != NULL; i++)
	{
		if (ops[i].op == operator)
		{
			int result = ops[i].func(num1, num2);

			printf("%d \n", result);
			return (0);
		}
	}
}
