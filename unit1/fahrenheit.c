#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // The program takes a number from the user and converts it from Celsius to Fahrenheit.
    printf("C: ");
    float cel = GetFloat();
    float f = ((cel * 9) / 5) + 32;
    printf("F: %f\n", f);
}
