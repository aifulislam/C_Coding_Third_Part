#include <stdio.h>
int main()
{
    // Aray-------------
    // Program 6.1-----

    int ft_marks, st_marks, final_marks;

    double total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;

    total_marks = ft_marks / 4.00 + st_marks / 4.00 + final_marks / 2.00;

    printf("%0.0lf\n", total_marks);


    return 0;
}

