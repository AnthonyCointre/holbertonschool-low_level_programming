#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
	Attribuer un nombre aléatoire à la variable n à chaque fois qu'il sera exécuté.
	Imprimer si le nombre stocké dans la variable n est positif ou négatif.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
