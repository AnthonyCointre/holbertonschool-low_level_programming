#include <stdio.h>

/*
	Imprimer l’alphabet en minuscules, suivi d’une nouvelle ligne.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
