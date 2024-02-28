#include "main.h"

/**
 * rev_string - a
 * @s: a
 *
 * Return: a
*/
void rev_string(char *s)
{
	int a = 0, i, j;
	char *str, temp;

	while (a >= 0)
	{
		if (s[a] == '\0')
			break;
		a++;
	}
	str = s;

	for (i = 0; i < (a - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
