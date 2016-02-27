#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // This takes a number from the user
    // and convert it to Celsius to Fahrenheit
    printf("C: ");
    float cel = GetFloat();
    float f = ((cel * 9) / 5) + 32;
    printf("F: %f\n", f);
}