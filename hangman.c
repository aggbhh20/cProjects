#include <stdio.h>
#include <string.h>

char word[] = "hangman";
char guessed[] = "_______";
char userInput;
char userguess[20];
int tries = 6;
int i;

int getUserInput() {
    printf("Enter a letter: ");
    scanf(" %c", &userInput);
    return 0;
}

int main() {
    getUserInput();
    while (tries > 0) {
        for(i = 0; i < 7; i++) {
            if(userInput == word[i]) {
                guessed[i] = userInput;
            }
        }
        if(strcmp(word, guessed) == 0){
            printf("you win!");
            return 0;
        }
        printf("%s\n", guessed); // Print guessed word
        getUserInput();
        tries -= 1;
    }
    printf("Enter your final guess: ");
    scanf("%s", userguess);
    if(strcmp(word, userguess) == 0) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
    return 0;
}
