#include "holberton.h"
/**
 * _strlen_recursion - returns the length of the string
 * @s: the given string
 *
 * Return: the length of the string
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return ((1) + _lenght(++s));
}

/**
 * _comp - compares the first and last characters
 * @n: the index of the first character
 * @a: the index of the second character
 * @s: the given string
 *
 * Return: a 1 or 0 depending on the result
 */
int _comp(int n, int a, char *s)
{
	if (s[n] != s[a])
		return (0);
	else if (n > a)
		return (1);

	return (_comp(n + 1, a - 1, s));
}

/**
   * is_palindrome - calculates if a string is a palindrome
   * @s: the given string
   *
   * Return: 1 if palindrome, 0 if not
   */
  int is_palindrome(char *s)
 {
       int n = 0;
        int a = _lenght(s) - 1;
 
    if (_lenght(s) <= 1)
     return (1);
 return (_comp(n, a, s));
 }

