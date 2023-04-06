#include "main.h"
/**
 * _strlen_recursion - Prints length of  string.
 * @s: this is the string to be printed
 * code by sue
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @k:is the  left index.
 * @j: is the index.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int pali_checker(char *s, int k, int j)
{
	if (s[k] == s[j])
		if (k > j / 2)
			return (1);
		else
			return (pali_checker(s, k + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if it  is a palindrome
 * @s: base for string.
 * code by sue
 * Return: 1 if n when prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

