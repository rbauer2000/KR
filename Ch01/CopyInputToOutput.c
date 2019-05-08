#include <stdio.h>

/* copy input to output; 2nd version, where getchar() expression is inside test part of while() */

int main()
{
	int c;

	while((c = getchar()) != EOF)
		putchar(c);
}
