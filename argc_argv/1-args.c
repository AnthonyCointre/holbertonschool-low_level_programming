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

	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}

	return (0);
}
