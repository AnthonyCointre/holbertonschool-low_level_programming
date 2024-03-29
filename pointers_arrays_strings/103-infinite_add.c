#include"main.h"

/**
 * add_helper - a
 * @n1: a
 * @n2: a
 * @r: a
 * @size_r: a
 * @carry: a
*/
char *add_helper(char *n1, char *n2, char *r, int size_r, int carry)
{
    int index = 0;

    if (n1 == r - 1 && n2 == r - 1)
    {
        if (carry == 1)
            r[index] = '1';
        else
            r[index] = '\0';
        return r;
    }

    if (*n1 && *n2)
    {
        r[index] = *n1 - '0' + *n2 + carry;
        carry = 0;
        if (r[index] > '9')
        {
            carry = 1;
            r[index] -= 10;
        }
        index++;
        n1--;
        n2--;
    }
    else if (*n1)
    {
        r[index] = *n1 + carry;
        carry = 0;
        if (r[index] > '9')
        {
            carry = 1;
            r[index] -= 10;
        }
        index++;
        n1--;
    }
    else if (*n2)
    {
        r[index] = *n2 + carry;
        carry = 0;
        if (r[index] > '9')
        {
            carry = 1;
            r[index] -= 10;
        }
        index++;
        n2--;
    }

    if (size_r == index && (*n1 || *n2 || carry == 1))
        return 0;

    return add_helper(n1, n2, r, size_r, carry);
}

/**
* infinite_add - adds two integers stored as strings
*
* @n1: first integer string to add
* @n2: second integer string to add
* @r: array to store resulting string in
* @size_r: size of array r
*
* Return: the summed string in r. If r is too small for the result,
* return (0);
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;

    while (*n1)
        n1++;
    while (*n2)
        n2++;
    size_r--;
    r[size_r] = '\0';
    n1--;
    n2--;

    return add_helper(n1, n2, r, size_r, carry);
}
