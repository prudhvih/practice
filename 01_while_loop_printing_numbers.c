#include<stdio.h>

int main(){
     int a = 0;
    int n;
    printf("enter your number : ");
    scanf("%d", &n);
    while (a<=n)
    {
      printf("%d\n",a);
      a++;
    } 
    return 0;
}