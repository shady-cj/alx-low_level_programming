#include <string.h>
int check_palindrome(char *, int, int);
/**
 * is_palindrome - A function that checks if
 * a string is palindrome
 * @s: The string to check
 * Return: int 1 or 0 if palindrome or not
 */
int is_palindrome(char *s)
{
	int len = (int) strlen(s);

	if (len == 0)
		return (0);
	if (len == 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - This is an helper
 * function that goes through each letter
 * @s: The full string
 * @start: start index
 * @end: end index
 * Return: 0 or 1 if palindromic
 */
int check_palindrome(char *s, int start, int end)
{
	if (end < start || end == start)
		return (1);
	else if (s[start] != s[end])
		return (0);

	else
		return (check_palindrome(
				s,
				start + 1,
				end - 1
				));

}
