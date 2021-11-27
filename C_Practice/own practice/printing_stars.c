#include <stdio.h>
int main()
{
    //for backward TRANGLE
    for (int i = 0; i < 5; i++)
    {
       
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
     printf("\n");
    //for scalan TRANGLE
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < (5 - i); k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
     printf("\n");
//for forward TRIANGLE
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < (5 - i); k++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}