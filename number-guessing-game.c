#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int min = 1;
    int max= 100;
    int counter = 0;
    int guess = 0;

    int randomnum = (rand() % (max - min + 1)) + min;
    printf("%d",randomnum);

    do{
        printf("\nEnter a guess: ");
        scanf("%d",&guess);
        counter++;

        if(guess == randomnum){
            printf("\nYou guessed correctly!");
        }
        else if(guess>randomnum){
            printf("\nYour guess is too high!");
        }
        else{
            printf("\nYour guess is too low!");
        }

    }while(guess != randomnum);

    printf("\nThe number was %d.",randomnum);
    printf("\nYou took %d tries.",counter);
}
