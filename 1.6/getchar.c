#include <stdio.h>

int main(void)
{
    int c;
    
    c = (getchar() != EOF);
    printf("getchar() != EOF IS : %i\n", c);
}
