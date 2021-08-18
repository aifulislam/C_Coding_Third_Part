#include <stdio.h>
int main()
{
    // Aray-------------
    // Program 6.8.2-----

    int i, ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(i = 9; i >= 0; --i){
        printf("%dth element is: %d\n", i + 1, ara[i]);
    }



    return 0;
}

