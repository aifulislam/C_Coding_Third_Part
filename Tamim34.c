#include <stdio.h>
int main()
{
    // Loop-------------
    // Program 4.3------

    int n = 1;

    while (n <= 100){
        printf("%d\n", n);
        n++;
        if (n > 10){
            break;
        }
    }

    return 0;
}
