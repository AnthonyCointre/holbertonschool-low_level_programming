#include <stdio.h>

/*
	Imprimer l'alphabet en minuscules, suivi d'une nouvelle ligne.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
