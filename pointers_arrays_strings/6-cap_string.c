#include "main.h"

/**
* is_sep - a
* @s: a
*
* Return: a
*/
int is_sep(char s)
{
	char sep[] = {'\t', '\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}'};
	int len = 0;

	while (sep[len] != '\0')
	{
		if (s == sep[len])
			return (1);
		len++;
	}
	return (0);
}

/**
* cap_string - a
* @s: a
*
* Return: a
*/
char *cap_string(char *s)
{
	int sep, len;

	sep = 1;
	len = 0;
	while (s[len] != '\0')
	{
		if (sep == 1 && (s[len] >= 'a' && s[len] <= 'z'))
		{
			s[len] -= 32;
			sep = 0;
		}
		sep = is_sep(s[len]);
		len++;
}
	return (s);
}
