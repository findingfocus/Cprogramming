#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
	//copy input to output
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF)
		//check if first space
		if (c == ' ' && state == OUT) {
			state = IN;
			putchar(c);
		}
		//do nothing if is more than one space
		else if (c == ' ' && state == IN)
			;
		else {
		//reset state and print normal character
			state = OUT;
			putchar(c);
		}
		printf("\n");
}
