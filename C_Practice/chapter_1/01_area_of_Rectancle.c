#include <stdio.h>

int main()
{
    int l, b;
    printf("\nAREA OF RECTANGLE\n\n");
    // input by user
    printf("Enter length : ");
    scanf("%d", &l);

    printf("\nEnter Breadth : ");
    scanf("%d", &b);

    printf("\nArea of Rectangle is %d\n\n", (l * b));
    return 0;
}