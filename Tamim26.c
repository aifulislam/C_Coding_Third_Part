#include <stdio.h>
int main()
{
    // Conditional Logic------
    // Program 3.8------------

    int number, remainder;
    number = 10;
    remainder = number % 2;

    if (remainder == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }

    return 0;
}
