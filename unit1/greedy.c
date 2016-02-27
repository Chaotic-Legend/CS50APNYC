#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;

int main(void) 

    // This gives you lagest amount of coins for the money you have

{

    float given_amount = 0;
    int cent_amount = 0;
    int Quarter = 0;
    int Dime = 0;
    int Nickel = 0;
    int leftover = 0;
    int coin_count = 0;

    do 
    {
    printf("This is CS50!\n");
    printf("Need to know the lagest amount of coins for the money you have?\n");
    printf("Then welcome to Isaac money teller!\n");
    printf("Just put how much money you have or put a random price and it will tell you lagest coins you could use!\n");
    printf("Remember to put the point frist\n");
    printf("O hai! How much change is owed?\n");
        given_amount = GetFloat();
        if(given_amount == 0||given_amount <= 0)
        printf("Number Should be greater then zero\n");
    }
    while(given_amount <= 0);

    cent_amount = (int)round(given_amount*100);

    Quarter = cent_amount / QUARTER;
    leftover = cent_amount % QUARTER;
    
    Dime = leftover / DIME;
    leftover = leftover % DIME;
    
    Nickel = leftover / NICKEL;
    leftover = leftover % NICKEL;
    
    coin_count = Quarter + Dime + Nickel + leftover;
    
    
    printf("You own %d coins!\n", coin_count);
    printf("Thanks for trying Isaac money teller!\n");
    printf("I hope you enjoyed it!\n");
    printf("This was by: GAMEMASTERX40!\n");
    printf("This is CS50!\n");



    
    return 0;

}
