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

    celsius = lower;

    printf("%5s %3s\n", c, f);

    while (celsius <= upper)
    {
        fahr =  9.0/5.0 * celsius + 32;
        printf("%5.1f %3.0f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
