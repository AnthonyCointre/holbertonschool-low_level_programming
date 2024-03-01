#include "main.h"

/**
 * leet - a
 * @s: a
 *
 * Return: a
 */
char *leet(char *s)
{
	char leet[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int len1 = 0;
	int len2 = 0;

	while (s[len1] != '\0')
	{
		while (leet[len2][0] != '\0')
		{
			if (s[len1] == leet[len2][0])
			{
				s[len1] = leet[len2][1];
			}

			len2++;
		}

		len2 = 0;
		len1++;
	}

	return (s);
}
