#include <stdio.h>

void main() 
{
    printf("Fahrenheit - Celcius\n");
    for(float fah= 300; fah > 0; fah = fah- 20)
        printf("%8.0f - %3.2f\n", fah, (5.0*(fah-32)/9.0) );
}