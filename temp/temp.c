#include <stdio.h>

int main()
{
    long tc;

    tc = 0;

    while (getchar() != EOF)
        ++tc;
    
    printf("Total Characters: %ld\n", tc);
}
