/*

#include<stdio.h>
#include<math.h>
int main()

{
	int a,b,c;
	float r;
	
	printf("enter value of a : ");
	
	scanf("%d",&a);
	
	printf("enter value of b : ");
	
	scanf("%d",&b);
	 
	printf("enter value of c : ");
	
	scanf("%d",&c);
	
	r  = (- b + (sqrt ((b*b)-(4*a*c)))/(2*a);
	
	printf("1st root  is  :%f ",r);
	
	r  = (- b- (sqrt ((b*b)-(4*a*c)))/(2*a);
	
	printf("2nd root is  :%f ",r);
	

	return 9;
	*/
	

#include<stdio.h>
int main()
{
 int i,j, count;
    
    for(i=1;i<100;i++)
    { 
        count =0;
        for(j=1;j<=i;j++)
        {
          if(i%j == 0)
            count++;
            
        }
        
        if(count==2)
           printf("%d ",i);
         
    }
      
    
}

