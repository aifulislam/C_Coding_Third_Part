#include <stdio.h>
int main()
{
    // Math-------------
    // Program 5.6-----

    double celcius, farhenheit;

    printf("Enter the temperature in celcius: ");
    scanf("%lf", &celcius);

    farhenheit = 1.8 * celcius + 32;
    printf("Temperature in farenhit is: %0.2lf\n", farhenheit);


    return 0;
}
