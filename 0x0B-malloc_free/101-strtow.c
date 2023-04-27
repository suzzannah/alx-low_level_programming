#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow -this splits 1 string in 2 words.
 * @str: the string
 * code by sue
 * Return: returns  pointer to array of strings
 */
char **strtow(char *str)
{
	int i, sue, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = sue = len = 0;
	while (str[i])
	{
		if (sue == 0 && str[i] != ' ')
			sue = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			sue = 0;
			len++;
		}
		i++;
	}

	len += sue == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * util - a function for fetching the words into an array
 * @words: strings array
 * @str: string
 */
void util(char **words, char *str)
{
	int i, j, start, suzzy;

	i = j = suzzy = 0;
	while (str[i])
	{
		if (suzzy == 0 && str[i] != ' ')
		{
			start = i;
			suzzy = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, start, i, j);
			j++;
			suzzy = 0;
		}

		i++;
	}

	if (suzzy == 1)
		create_word(words, str, start, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
