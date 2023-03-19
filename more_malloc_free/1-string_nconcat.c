#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: max bytes to concatenate from s2
 * Return: pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *final_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		n = s2_len;
	final_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (final_str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		final_str[i] = s1[i];
	for (j = 0; j < n; j++)
		final_str[s1_len + j] = s2[j];
	final_str[s1_len + n] = '\0';
	return (final_str);
}
