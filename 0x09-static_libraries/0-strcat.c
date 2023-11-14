#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: First string
 * @src: Second string
 *
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;

while (dest[a] != '\0')
{
a++;
}

b = 0;

while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}

dest[a] = '\0';

return (dest);
}

