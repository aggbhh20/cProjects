#include <stdio.h>
#include <string.h>

#define MAX_NOTE_LENGTH 30
#define MAX_NOTES 5

int notesUsed = 0;
char notes[MAX_NOTES][MAX_NOTE_LENGTH];

char command[20]; // Size specified for command

int i;
int b = 0;

int showNotes() {
    for (i = 0; i < notesUsed; i++) { // Loop through notesUsed instead of MAX_NOTES
        printf("\n%s", notes[i]); // Remove extra space in the printf
    }
    return 0;
}

int addNotes() {
    printf("Enter a note: ");
    fgets(notes[notesUsed], MAX_NOTE_LENGTH, stdin); // Store directly in notes array
    notesUsed++; // Increment notesUsed after adding a note
    if (notesUsed >= MAX_NOTES) {
        printf("\nToo many notes!");
    }
    return 0;
}

int main() {
    while (b == 0) {
        printf("\nnotesApp> "); // Added space after prompt
        fgets(command, sizeof(command), stdin); // Read command
        command[strcspn(command, "\n")] = '\0'; // Remove trailing newline
        if (strcmp(command, "getNotes") == 0) {
            showNotes();
        }
        if (strcmp(command, "addNote") == 0) {
            addNotes();
        }
        if (strcmp(command, "quit") == 0) {
            return 0;
        }
    }
}
