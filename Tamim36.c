#include <stdio.h>
int main()
{
    // Loop------------
    // Program 4.5-----

    int n = 5;
    int i = 1;

    while(i <= 10){
        printf("%d X %d = %d\n", n, i, n*i);
        i = i + 1;
    }

    return 0;
}
