#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Recursive helper function
 * to check palindrome
 * @s: string to check
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}
