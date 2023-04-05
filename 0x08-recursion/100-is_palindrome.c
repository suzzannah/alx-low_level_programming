#include "main.h"
/**
 * _strlen_recursion - Print length of  string.
 * @s: string to be printed
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - checks  if  the s is palindrome.
 * @s: our string base address.
 * code by sue
 * @w: the left.
 * @j:the right .
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int w, int j)
{
	if (s[i] == s[j])
		if (w > j / 2)
			return (1);
		else
			return (pal_checker(s, w + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if it  is palindrome
 * @s: base for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

