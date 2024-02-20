#include <stdio.h>

/*
	Imprimer l’alphabet minuscule à l’envers, suivi d’une nouvelle ligne.
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
