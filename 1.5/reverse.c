#include <stdio.h>

int main(void)
{
	printf("FAHR TO CELSIUS CONVERTER\n");
	printf("Farenheit\tCelsius\n");
    for (int fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%9d %13.1f\n", fahr, (5.0 / 20.0) * (fahr - 32));
    }
}