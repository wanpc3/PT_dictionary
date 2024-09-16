#ifndef PT_DICTIONARY
#define PT_DICTIONARY

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>  // For wide characters (wchar_t)
#include <wctype.h> // For wide character functions like iswalpha

// Function declarations using wide characters
void welcome_notes_PT();
int word_checker(const wchar_t *word);
int ft_isalpha(wchar_t c);

#endif
