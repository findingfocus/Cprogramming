#include <stdio.h>

int main(void) 
{
    int lower, upper, step;
    float celsius, fahr;
    char* ctext = "Celsius";
    char* ftext = "Farenheit"; 

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;

    printf("-CELSIUS TO FARENHEIT CONVERTER-\n");
    printf("%s %15s\n", ctext, ftext);

    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0 + 32.0);
        printf("%7.f %15.f\n", celsius, fahr);
        celsius += step;
    }
}
