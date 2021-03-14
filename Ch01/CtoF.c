#include <stdio.h>

#define LOWER -20
#define UPPER 50
#define STEP 5

int main()
{
	int c, f;

	for (c = LOWER; c <= UPPER; c = c + STEP)
                printf("%3d %6.1f\n", c, (9.0/5.0)*c + 32);
        return(0);
}

