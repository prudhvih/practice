#include<stdio.h>

int main(){
     float c;
     printf("\nCelcius TO Farenheit\n\n");
    // input by user
    printf("Enter in Celcius : ");
    scanf("%f", &c);

    printf("\nFarenheit is %.2f\n\n", ((c* (1.8)) + 32));
    return 0;
}