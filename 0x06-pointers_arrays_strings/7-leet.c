/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */

char *leet(char *s)
{
	char leet_dict[] = "aAeEoOtTlL";
	char leet_repl[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_dict[j] != '\0'; j++)
		{
			if (s[i] == leet_dict[j])
			{
				s[i] = leet_repl[j];
				break;
			}
		}
	}

	return (s);
}

