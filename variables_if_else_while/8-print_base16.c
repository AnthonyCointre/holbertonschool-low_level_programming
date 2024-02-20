#include <stdio.h>

/*
	Imprimer tous les nombres de base 16 en minuscules, suivis d'une nouvelle ligne.
*/
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
