#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, state; 

	while ((c = getchar()) != EOF)
	{
        /* detects word or new line or tab */
		if (c == ' ' || c == '\t' || c == '\n')
		{   
            /* separates each word with newline then resets state */
			if (state == IN)
			{
				printf("\n");
				state = OUT; 
			}
		}
        /* prints character since it is not new word yet */
		else
		{
			putchar(c);
			state = IN;
		}
	}
}
