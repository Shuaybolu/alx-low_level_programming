#include "main.h"

/**
 * _isalpha - This program checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

