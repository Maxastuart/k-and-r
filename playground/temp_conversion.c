#include <stdio.h>

float fahr_to_cels(float fahr);

int main(void)
{
    float fahr, celsius; 
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, fahr_to_cels(fahr));
        fahr = fahr + step;
    }
}

float fahr_to_cels(float fahr)
{
    float celsius = ((5.0/9) * (fahr-32.0));
    return celsius;
}
