#include <stdio.h>

/*
	Imprimer tous les nombres à un chiffre de base 10 en commençant par 0, suivis d'une nouvelle ligne.
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
