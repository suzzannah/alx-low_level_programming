#include "main.h"
/**
 * _strlen_recursion -This Prints length of a string.
 * @s:to be printed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pali_checker - checks if s is palindrome.
 * @s: string main address.
 * @i:this is  left index.
 * @j:this is right index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pali_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pali_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

