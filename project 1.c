#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int randomNumber;

    // Initialize random seed based on current time
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = (rand() % 100) + 1;
    int no_of_guesses= 0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", randomNumber);
    
    do
    {
        printf("Guess the number:");
        scanf("%d",&guessed);
        if(guessed>randomNumber){
            printf("Please enter lower number!\n");
        }
        else{
            printf("Enter higher number please!\n");
        }

        no_of_guesses++;
        
    } while (guessed!=randomNumber);

    printf("You guessed the number in %d guesses",no_of_guesses);
    

    return 0;
}
