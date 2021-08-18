#include <stdio.h>
int main()
{
    // Math-------------
    // Program 5.5-----

    int i, n, sum;

    printf("Enter press your last digit: ");
    scanf("%d", &n);

    //sum = (n* (n + 1)) / 2;

    for(i = 1, sum = 0; i <= n; n++){
        sum = sum + i;
    }
    printf("Summation is %d\n", sum);


    return 0;
}
