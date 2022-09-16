#include <stdio.h>

int main()
{
    /* print Fahrenheit-Celsius table
     * for fahr = 0, 20, ..., 300 */

    float fahr, celsius;
    int lower, upper, step;
    char* f;
    char* c;

    f = "f";
    c = "c";

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;

    printf("%3s %5s\n", f, c);

    for (fahr; fahr >= 0; fahr -= step) 
    {
        celsius = 5.0/9.0 * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }

    return 0;
}
