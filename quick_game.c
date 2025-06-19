#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guess_number =0;
    int guessed;
   printf("              🙋‍♂️             \n");
    printf(" |==========================|\n");
    printf(" |  WELCOME TO GUESS GAME   |\n");
    printf(" |==========================|\n"); printf("\n");
    do {
        printf(" enter the number : ");
        scanf("%d" ,&guessed);
    if (guessed<randomNumber){
    printf(" please choose high number\n");
    
   
   } else if ( guessed>randomNumber) {
        printf(" please choose low number\n");
    }
    else {
        printf(" congratulation!!😄 \n");
    }
   guess_number++;
    } while (guessed !=randomNumber);
   
    //print the result 

    printf(" your correct num is : %d\n",randomNumber);
    printf(" you guess the number : %d attempts👍\n",guess_number);
    printf("\n");
    printf(" thank you for playing game ☺\n");
    
    
    return 0;

}