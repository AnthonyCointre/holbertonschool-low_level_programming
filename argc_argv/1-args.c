#include "main.h"

/**
 * main - a
 * @argc: a
 * @argv: a
 *
 * Return: a
*/
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);

	for (i = 0; i < argc - 1; i++)
	{
		printf("%d", *argv[i]);
	}

	return (0);
}
