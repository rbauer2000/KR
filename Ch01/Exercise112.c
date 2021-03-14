#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* prints input one word per line */

main()
{
    int c, state;
    
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            c = '\n';
            printf("\n");
        }
        else
            putchar(c); 
            
    }  
}
