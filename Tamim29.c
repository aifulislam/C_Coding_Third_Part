#include <stdio.h>
int main()
{
    // Conditional Logic------
    // Program 3.10-----------
    // AND operator-----------

    char ch;
    printf("Please enter a charecter: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is lower case\n", ch);
    }
    if(ch >= 'A' && ch <='Z'){
        printf("%c is upper case\n", ch);
    }

    return 0;
}
