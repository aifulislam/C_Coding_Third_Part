#include <stdio.h>
int main()
{
    // Conditional Logic------
    // Program 3.9------------

    int n;
    printf("Plese enter a number: ");
    scanf("%d", &n);

    if(n %2 == 0){
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}
