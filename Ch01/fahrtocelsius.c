#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0,20,...,300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("\n Conversion of F to C\n\n");
    printf("Fahr  Celsius\n");
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
        
    }
    
}
