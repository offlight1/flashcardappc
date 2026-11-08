#include <stdio.h>


/*1. while loop and wait for user input
2. feature to add flashcards
3. feature to delete flashcards
4. feature to view all flashcards in the deck
5. feature to study the flash cards
(1. present one flash card at a time, user can state they know it or that they dont,
 they can also flip the card to see definition but that counts as an idk. go to next 
 flashcard, repeat. once all flashcards are gone through, present the ones they didn't know until they get it,
 then display accuracy of the original run.) */

#define MAXFLASHCARDS 30
#define MAXTERMLEN 20
#define MAXDEFINITION 40

struct Flashcard{
	char term[MAXTERMLEN];
	char definition[MAXDEFINITION];
}

void add_flashcard;
void edit_flashcard;
void remove_flashcard;
void view_allcards;
void study_flashcards;

struct Flashcard flashcards[MAXFLASHCARDS];

int user_choice;
int card_count = 0;

int main() {
	while (1){
		printf("What would you like to do? 1. Add a flashcard 2. Edit a flashcard 3. Remove a flashcard 4. View all your cards 5. Study your cards 6. Exit\n");
		scanf("%d\n", &user_choice);

	switch (user_choice){
	case '1':
		add_flashcard();
		break;

	case '2':
		edit_flashcard();
		break;

	case '3':
		remove_flashcard();
		break;

	case '4':
		view_allcards();
		break;

	case '5':
		study_flashcards();
		break;

	case '6':
		return 0;
	}

	}
}

void add_flashcard() {
	if (card_count < MAXFLASHCARDS){
		printf("Enter the term:\n");
		scanf(" %[^\n]", flashcards[card_count].term);
		printf("Enter the term definition:\n")
		scanf(" %[^\n]", flashcards[card_count].definition);

		card_count++;
	} 
	else printf("Max amount of flashcards reached\n");
}