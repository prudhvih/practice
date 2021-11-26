#include<stdio.h>

int main(){
    float r;
     printf("\nAREA OF CIRCLE\n\n");
    // input by user
    printf("Enter Radius : ");
    scanf("%f", &r);

    printf("\nArea of Circle is %.3f\n\n", ((3.142)*r*r));
    
    return 0;
}