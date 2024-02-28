#include "main.h"

/**
 * rev_string - a
 * @s: a
 *
 * Return: a
*/
void rev_string(char *s)
{
	int len = 0, i, j;
	char *str, temp;

	while (s[len] != '\0')
	{
		len++;
	}
	str = s;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
