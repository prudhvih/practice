#include <stdio.h>

int main()
{
    float r, x, y;
    x = 22;
    y = 7;

    printf("\n\tAREA OF CIRCLE\n\n");
    // input by user
    printf("Enter Radius : ");
    scanf("%f", &r);

    printf("\nArea of Circle is %f\n\n", ((x / y) * r * r));

    return 0;
}