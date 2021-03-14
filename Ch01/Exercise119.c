#include <stdio.h>
#define MAXLINE 1000     /* maximum imput line size */

int getlin(char line[], int maxline);
void reverse(char s[], char rev[], int len);

/* reverses the input a line at a time. */

main()
{
    int len;
    
    char line[MAXLINE];
    char rev[MAXLINE];
    
    while ((len = getlin(line, MAXLINE)) > 0)
        {
            reverse(line, rev, len);
            printf("%d\n%s%s\n", len, line, rev);
        }
    
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

/* reverse: reverses the character string s. */

void reverse(char s[], char rev[], int len)
{
   int i;   
    
    i = 0;
    while ((rev[i] = s[len- 2 - i]) != '\0')
        ++i; 

}
