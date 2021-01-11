#include <stdio.h>

int main(void) {
    int lower, upper, step;
    float celsius, fahr;

    celsius = 0;
    lower = 0;
    upper = 100;
    step = 10;

    while (step <= upper)
    {
        fahr = (step * 9.0/5.0 + 32);
        printf("%3f", celsius);
        printf("%6.1f", fahr);
        step += 10;
    }
}
