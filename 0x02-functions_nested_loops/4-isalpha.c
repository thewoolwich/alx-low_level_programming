#include "main.h"

/**
 * is_alpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for  alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}

