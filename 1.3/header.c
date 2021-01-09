#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    char *f = "farenheit";
    char *c = "celsius";

    fahr = lower;
    
    printf("\n-FARENHEIT TO CELSIUS CONVERTER-\n");
    printf("\n%s", f);
    printf("%14s\n", c);

    while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr - 32.0);
	printf("%9.0f %13.1f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
