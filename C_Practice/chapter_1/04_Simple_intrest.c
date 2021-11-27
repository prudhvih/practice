#include <stdio.h>

int main()
{
    int p, t ,r;
  
    printf("\nLets find Simple Intrest \n\n");
    // input by user
    printf("Enter Principle Amount  : ");
    scanf("%d", &p);

    printf("Enter Tenure in years  : ");
    scanf("%d", &t);

     printf("Enter Rate of intrest  : ");
    scanf("%d", &r);

    printf("\nSimple intrest \nFor %d Rupees \nFor %d years \nAt %d % ROI is %d\n\n",p,t,r, ((p*t*r)/100));
    return 0;
}