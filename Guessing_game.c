#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int correctnumber = rand()%100 + 1;
    int numberinput;
    while (numberinput != correctnumber){
        printf("\nEnter number 1-100: ");
        scanf("%d", &numberinput);
        if (numberinput > correctnumber) {
            printf("\nTry a lower number");
        }
        else if (numberinput < correctnumber) {
            printf("\nTry a higher number");
        }
    }
    printf("Bingo! Correct number!");
    return 0; 
    
}