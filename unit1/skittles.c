#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // This get a ramdom number and then the user have to guess the number
    srand(time(NULL));

    int skittles = rand() % 1024;
    printf("This is CS50!\n");
    printf("Welcome to Isaac guessing game! Want to play!?\n");
    printf("Guess the number of skittles.\n");
    printf("It's between 0 and 1024.\n");
    printf("Good Luck!\n");
    printf("Your guess: ");
    int user_guess = GetInt();
    
    while (skittles != user_guess){
        if (user_guess < 0 || user_guess > 1024) {
            printf("Nope, you're outta range. Try again.\n");
        }
        if (user_guess < skittles) {
            printf("Too low! Guess again!\n");
       }
        if (user_guess > skittles) {
            printf("Too high! Guess again!\n");
        }
        user_guess = GetInt();
    }
    
    printf("You got it right! You won!\n");
    printf("There was %i skittles.\n", skittles);
    printf("Thanks for playing Isaac guessing game!\n");
    printf("I hope you enjoyed it!\n");
    printf("This was by: GAMEMASTERX40!\n");
    printf("This is CS50!\n");
}