/**
 * wildcmp - Compare strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/*
	 * If both strings are empty,
	 * they are identical
	 */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/*
	 * If the character in s2 is a '*', we can skip it or match
	 * it with one or more characters in s1
	 */
	if (*s2 == '*')
	{
		/*
		 * Skip the '*'
		 */
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		/*
		 * Match the '*' with one or more characters in s1
		 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
	/*
	 * If the characters match or s2 contains a '?' (wildcard),
	 * move to the next character
	 */
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
