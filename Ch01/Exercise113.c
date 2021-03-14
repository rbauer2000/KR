#include <stdio.h>

/* print a histogram of the lengths of words in input */

main()
{
    int c, i, count, j;
    int wordlength[10];
    
    count = 0;
    for (i = 0; i < 10; ++i)
        wordlength[i] = 0;
    
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (count != 0)
                ++wordlength[count - 1];
            count = 0;
        }
        else
            ++count;       
    }
    printf("\n");
    for (i = 0; i<10; ++i)
        printf(" %d", wordlength[i]);
    printf("\n");
    for (i = 0; i<10; ++i)
    {
        printf("%2d", i+1);
        for (j = 1; j <= wordlength[i]; ++j)
            printf("-");
        printf("\n");
    }
}
