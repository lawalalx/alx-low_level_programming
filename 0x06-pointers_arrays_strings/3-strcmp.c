#include <stdio.h>

/**
 * _strcmp - the function that compares two strs
 * @s1: first srt
 * @s2: second str
 * Return: Always int
 */

int _strcmp(char *s1, char *s2)
{
	int counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	return (s1[counter] - s2[counter]);
}
