#include <stdio.h>
int main()
{
    // Conditional Logic------
    // Program 3.4------------

    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n < 0){
        printf("The number is nagative\n");
    }
    else if (n > 0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is zero!\n");
    }

    return 0;
}
