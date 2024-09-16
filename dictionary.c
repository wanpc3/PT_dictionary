#include "portuguese.h"

int main()
{
    wchar_t *word = malloc(sizeof(wchar_t) * 100); // allocate memory for wide characters
    int valid_word;

    // Set locale to UTF-8
    setlocale(LC_ALL, "en_US.UTF-8");

    if (word == NULL)
        return 1;

    welcome_notes_PT();

    do 
    {
        wprintf(L"Type a word to search: ");

        // Use fgetws to handle wide characters
        if (fgetws(word, 100, stdin) == NULL)
        {
            wprintf(L"Invalid input, please try again.\n");
            continue;
        }

        // Remove the newline character from fgetws
        word[wcslen(word) - 1] = L'\0';

        valid_word = word_checker(word);

        if (!valid_word)
            wprintf(L"Word not found, try again.\n");
    }
    while (!valid_word);

    free(word); // deallocate memory

    return 0;
}
