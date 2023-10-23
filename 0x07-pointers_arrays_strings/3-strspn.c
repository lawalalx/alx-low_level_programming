/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;
	char *start_accept = accept;

	while (*s)
	{
		match = 0;
		accept = start_accept;

		while (*accept)
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
				accept++;
		}
		if (match)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}

