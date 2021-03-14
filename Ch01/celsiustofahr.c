#include <stdio.h>

/* print table of Celsius to Fahr starting at -20 and step 10 and max 150. */

main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20;
    upper = 150;
    step = 10;
    
    printf("\n Conversion of C to F\n\n");
    printf(" C        F\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0)*celsius + 32.0;
        printf("%3.0f %8.1f\n", celsius, fahr);
        celsius = celsius + step;
        
    }
    
}
