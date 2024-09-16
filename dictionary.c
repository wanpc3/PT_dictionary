#include "portuguese.h"

int main()
{
	char *word = malloc(sizeof(char) * 100); // allocate memory
	int valid_word;

	if (word == NULL)
		return 1;

	welcome_notes_PT();

	do 
	{
		printf("Type to search: ");
		if (scanf("%99s", word) != 1)
		{
			printf("Please try again.\n");
			continue;
		}

		valid_word = word_checker(word);

		if (!valid_word)
			printf("We couldn't find it, try again.\n");
	}
	while (!valid_word);

	free(word); // deallocate memory

	return (0);
}