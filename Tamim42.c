#include <stdio.h>
int main()
{
    // Loop-------------
    // Program 4.12-----

    int a, b, c;

    for(a = 1; a <= 3; a++){
        for(b = 1; b <= 3; b++){
            for(c = 1; c <= 3; c++){
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }

    return 0;
}
