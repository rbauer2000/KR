#include <stdio.h>

/* copy input to output; 1st version */

int main()
{
    int c;
    
    c = getchar();
    
    while (c = getchar() != EOF) 
    {
        printf("%d\n", c);
    }
}
