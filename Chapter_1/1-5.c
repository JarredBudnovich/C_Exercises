//Exercise 1-5. Modify the temperature conversion program to print the 
//table in reverse order, that is, from 300 degrees to 0.

#include <stdio.h>

//Print Fahrenheit-Celsius table for fahr = 300, 280, ..., 0; floating-point version

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   //lower limit of temperature table
    upper = 300; //upper limit
    step = 20;   //step size

    fahr = upper;
    printf("Fahrenheit      Celsius\n");
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%-15.0f %-10.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}