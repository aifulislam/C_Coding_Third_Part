#include <stdio.h>
int main()
{
     // Conditional Logic------
    // Program 3.9.0------------

    char c;
    printf("Please enter a charecter: ");
    scanf("%c", &c);

    if(c == 'a'){
        printf("%c is lower case\n", c);
    }
    else if (c == 'A'){
        printf("%c is upper case\n", c);
    }
    else if (c == 'b'){
        printf("%c is lower case\n", c);
    }
    else if (c == 'B'){
        printf("%c is upper case\n", c);
    }
    else if (c == 'c'){
        printf("%c is lower case\n", c);
    }
    else if (c == 'C'){
        printf("%c is upper case\n", c);
    }
    else{
        printf("%c Undifine charecter\n", c);
    }
    return 0;
}
