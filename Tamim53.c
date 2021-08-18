#include <stdio.h>
int main()
{
    // Math-------------
    // Program 5.6.2-----

    double celcius, farhenheit;

    printf("Enter the temperature in farhenheit: ");
    scanf("%lf", &farhenheit);

    celcius = farhenheit - 32 / 1.8;
    printf("Temperature in celcius is: %0.2lf\n", celcius);


    return 0;
}
