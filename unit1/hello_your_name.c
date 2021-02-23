#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // The program tells your name.
    printf("Enter your name: ");
    string name = GetString();
    printf("Hello, %s\n", name);
    
}
