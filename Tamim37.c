#include <stdio.h>
int main()
{
    // Loop------------
    // Program 4.6-----

    int n;
    printf("Please enter your number: ");
    scanf("%d", &n);

    int i;

    for(i = 1; i <= 10; i = i + 1){
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}
