#include <stdio.h>
void tab(int *ptr, int k)
//function of tables
{
    int mul;
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            mul = (*ptr + j) * (i + 1);
            printf("%d x %d =%d\n", (*ptr + j), i + 1, mul);
        }
        printf("*********************\n");
    }
}

int main()
{
    int k;
    int arr[k];
    printf("enter how many tables u want : ");
    scanf("%d", &k);
    for (int n = 0; n < k; n++)
    {
        printf("enter no:%d table\n",(n+1));
        scanf("%d", &arr[n]);
    }   
    tab(arr, k);
    return 0;
}