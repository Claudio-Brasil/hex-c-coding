#include "holberton.h"

/**
 * rev_tring - reverse a tring
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
int a, ln;
char *r = s;
char temp;

for (ln = 0; *s != '\0'; s++)
ln++;

s--;
ln--;

for (a = 0; a <= ln / 2; a++)
{
temp = *s;
*s = *r;
*r = temp;
s--;
r++;
}
}
