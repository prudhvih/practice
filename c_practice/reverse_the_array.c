#include <stdio.h>
//function to reverse the varables order in an array
void rev(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n -i-1];
        arr[n -1- i] = temp;
    }
}
int main()
{
    int k;
    int arr[k];
    printf("Enter the No.of varable to reverse : ");
    scanf("%d",&k);
    for (int i=0;i<k;i++)
    {
    printf("Enter No.%d variable : ",i+1);
    scanf("%d",&arr[i]);
    }
    rev(arr,k);
    printf("\n\n*--_--**--_--**--_--**--_--*\n\n");
    for (int j = 0; j < k; j++)
    {
        printf("No.%d variable is :%d\n",(j+1) ,arr[j]);
    }

    return 0;
}