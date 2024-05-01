#include <stdio.h>
#include <stdbool.h> 
int number = 500;
int userNumber;
int number3 = 22;
int number2 = 22;
float balls = 5.55;
char whyDoesCNotHaveStrings[] = "\nc is dum and stupid";
const bool aBoolean = true;
bool anotherBool = false;
int main() {
    //comment
    printf("Find me in the asm code!");
    printf("%s\n", whyDoesCNotHaveStrings);
    printf("%lu\n", sizeof(balls));
    printf("%lu\n", sizeof(whyDoesCNotHaveStrings));
    printf("This is a boolean: %d\n", aBoolean);
    printf("%d\n", anotherBool == aBoolean);

    if(number2 == number3){
        printf("\nNumber 2 is equal to number 3!");
    }
    printf("\nInsert your number: ");
    scanf("%d", &userNumber);
    printf("\nYour number is: %d", userNumber);


    return 0;
}
