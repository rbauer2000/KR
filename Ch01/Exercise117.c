#include <stdio.h>
#define MAXLINE 1000     /* maximum imput line size */
#define OVER 3

int getlin(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
    int len;                   /* current line length */             
    
         /* maximum length seen so far */
    char line[MAXLINE];        /* current input line */
        
    while ((len = getlin(line, MAXLINE)) > 0)
        if (len > OVER)
            printf("%s", line);        
    return 0;    
}

/* getlin:  read a line into s, return length */

int getlin(char s[], int lim)
{
    int c, i;
    
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}




