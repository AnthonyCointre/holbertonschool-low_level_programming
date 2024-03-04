#include "main.h"
/**
 *cap_string - a
 *@s: a
 *
 *Return: a
 */
char *cap_string(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'
		    || s[len] == ',' || s[len] == ';' || s[len] == '.'
		    || s[len] == '.' || s[len] == '!' || s[len] == '?'
		    || s[len] == '"' || s[len] == '(' || s[len] == ')'
		    || s[len] == '{' || s[len] == '}')
		{
			if (s[len + 1] >= 97 && s[len + 1] <= 122)
			{
				s[len + 1] = s[len + 1] - 32;
			}
		}
		len++;
	}
	return (s);
}
