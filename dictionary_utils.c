#include "portuguese.h"

void welcome_notes_PT()
{
	printf("---Welcome to Portuguese language dictionary!---\n");
}

int ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}

int ft_islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 224 && c <= 255))
		return (1);
	return (0);
}

int ft_isupper(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 192 && c <= 223))
		return (1);
	return (0);
}

int word_checker(const char *word)
{
	for (int i = 0; word[i] != '\0'; i++)
	{
		if (!ft_isalpha((unsigned char)word[i]))
		{
			return (0);
		}
	}
	return (1);
}
