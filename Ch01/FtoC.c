#include <stdio.h>

#define LOWER 0        /* lower limit of temerature table */
#define UPPER 300      /* upper limit */
#define STEP  20       /* step size */

/* print Fahrenheit-Celsius table for F = 0, 20, ..., 300 */

int main()
{
	int fahr, celsius;

        for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32)); 
	return(0);
}
