#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Description: This function determines the sign of a given number and prints
 *              the corresponding sign character.
 *
 * Return: 1 if the number is positive, -1 if negative, or 0 for anything else.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43); /* + */
return (1);
}
else if (n < 0)
{
_putchar(45); /* - */
return (-1);
}
else
{
_putchar(48); /* 0 */
return (0);
}
}
