#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the number : ");
    scanf("%d", &a);
    printf("does it divisible by : ");
    scanf("%d", &b);
    if (a % b)//in bracket 0 means FALSE 1 means TRUE ,remainder come in bracket
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}