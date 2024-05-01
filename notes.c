#include <stdio.h>;
#include <string.h>;

#define maxNoteLength 30
#define maxNotes 5
int notesUsed = 0;
char note[maxNoteLength];
char notes[maxNoteLength][maxNotes];

char command[];

int i;
int b = 0;

int showNotes(){
    for(i = 0; i < maxNotes; i++){
        printf("\n %s", notes[i]);
    }
    return 0;
}
int addNotes(){
    printf("Enter a note: ");
    scanf("%s", note);
    if(notesUsed < 5){
        strcpy(notes[notesUsed], note);
    }
    else{
        printf("\n Too many notes!");
    }
    return 0;
}

int main(){
    while(b == 0){
        printf("\n %snotesApp>");
        scanf("%s", command);
        if(strcmp(command, "getNotes") == 0) {
            showNotes();
        }
        if(strcmp(command, "addNote") == 0) {
            addNotes();
        }
        if(strcmp(command, "quit") == 0) {
            return 0;
        }
    }
}

