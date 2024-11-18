#include<stdio.h>

main()
{
     float celsius, fahr;
     int lower, upper, step;

     lower = 0; // lower limit of temperature table
     upper = 300; // upper limit 
     step = 20; // step size

     celsius = lower;
     while (celsius >= lower) {
     fahr = (9*celsius) / 5+32;
     printf("%3.0f %5.1f\n", fahr);
     fahr = fahr + step;
     }
}
