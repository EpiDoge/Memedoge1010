#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random = rand()%3 + 1;
    char userinput;
    printf("\nChoose an option(R = rock, P = paper, S = scissors): ");
    scanf("%c", &userinput);
    if (userinput == 'R' && random == 2){
        printf("Opponent chose paper, you lose");
    }
    else if (userinput == 'P' && random == 3){
        printf("Opponent chose scissors, you lose");
    }
    else if (userinput == 'S' && random == 1){
        printf("Opponent chose rock, you lose");
    }
    else if (userinput == 'R' && random == 3){
        printf("Opponent chose scissors, you win");
    }
    else if (userinput == 'P' && random == 1){
        printf("Opponent chose rock, you win");
    }
    else if (userinput == 'S' && random == 2){
        printf("Opponent chose paper, you win");
    }
    else if (userinput == 'R' && random == 1){
        printf("Opponent chose rock, its a tie");
    }
    else if (userinput == 'P' && random == 2){
        printf("Opponent chose paper, its a tie");
    }
    else if (userinput == 'S' && random == 3){
        printf("Opponent chose scissors, its a tie");
    }
    return 0;
}