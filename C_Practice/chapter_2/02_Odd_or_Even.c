#include <stdio.h>
int main()

{
	int a, b;
	printf("enter number :");
	scanf("%d", &a);
	if (a % 2)
	{
		printf("%d is odd\n", a);
	}
	else
	{
		printf("%d is even\n", a);
	}
	return 0;
}
