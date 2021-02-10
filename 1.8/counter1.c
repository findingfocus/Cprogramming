#include <stdio.h>

int main()
{
    int blanks, tabs, newlines, c;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    
    while ((c = getchar()) != EOF)
        if (c == ' ')
            blanks++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    printf("\nBlanks: %i, Tabs: %i, Newlines: %i\n", blanks, tabs, newlines);
}
