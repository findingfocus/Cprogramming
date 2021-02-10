#include <stdio.h>

int main(void) {
    printf("C --> ");
    int first = getchar();
    if (first == 'g'|| first == 'G')
    {
        printf("Correct! C --> G\n");
    }
    else
    {
        printf("It's actually C --> G\n");
    }
}