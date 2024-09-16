#include "portuguese.h"
#include <wctype.h> // For wide character functions

void welcome_notes_PT()
{
    wprintf(L"---Welcome to the Portuguese language dictionary!---\n");
}

int ft_isalpha(wchar_t c)
{
    return iswalpha(c);
}

int word_checker(const wchar_t *word)
{
    for (int i = 0; word[i] != L'\0'; i++)
    {
        if (!ft_isalpha(word[i]))
        {
            return 0; // Not a valid alphabetic character
        }
    }
    return 1; // Word is valid
}
