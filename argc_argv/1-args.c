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

	printf("%d\n", argc - 1);

	for (i = 3; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	return (0);
}
