#include <stdio.h>

float FahrToCelsius(float fahr);

/* rewrite of F to C conversion program of Section 1.2 to use Function for conversion */

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
    while (fahr <= upper)
    {
        celsius = FahrToCelsius(fahr);
        printf("%3.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    } 
    return 0;   
}

/* FahrToCelsius: converts fahr to celsius */

float FahrToCelsius(float fahr)
{
    return (5.0/9.0)*(fahr-32.0);
}
