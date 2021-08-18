#include <stdio.h>
int main()
{
     // Conditional Logic------
    // Program 3.12-----------
    // OR || operator---------

    int ch;
    printf("Please enter a charector: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is vowel\n", ch);
    }
    else{
        printf("%c is consonent\n", ch);
    }

    return 0;
}
