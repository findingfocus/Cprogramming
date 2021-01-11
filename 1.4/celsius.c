#include <stdio.h>

int main(void) {
    int lower, upper, step;
    float celsius, fahr;

    celsius = 0;
    lower = 0;
    upper = 100;
    step = 10;

    char* ftext = "Farenheit"; 
    char* ctext = "Celsius";

    printf("%s %15s\n", ctext, ftext);

    while (celsius <= upper)
    {
        printf("%7.f", celsius);
        fahr = (celsius * 9.0/5.0 + 32.0);
        printf("%16.f\n", fahr);
        celsius += step;
    }
}
