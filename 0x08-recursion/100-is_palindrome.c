#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - checks  if s is a palindrome.
 * @s: string base address.
 * @k: the left index.
 * @j: the right index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int k, int j)
{
	if (s[k] == s[j])
		if (k > j / 2)
			return (1);
		else
			return (pal_checker(s, k + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if s is palindrome
 * @s: address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}


