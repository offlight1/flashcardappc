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

int main() {
	while (1){
		return 0;
	}
}