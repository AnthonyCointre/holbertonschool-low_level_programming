#include <stdio.h>

/*
	Imprimer l'alphabet en minuscules, puis en majuscules, suivi d'une nouvelle ligne.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
