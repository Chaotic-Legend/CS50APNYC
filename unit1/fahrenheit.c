#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("C: ");
    float c = GetFloat();
    float f = ((c * 9) / 5) + 32;
    printf("F: %.1f\n", f);
}