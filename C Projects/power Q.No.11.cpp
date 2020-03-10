#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,p;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("\n Enter the value of b :");
	scanf("%d",&b);
	p=pow(a, b);
	printf("The value of %d ^ %d = %d",a,b,p);
	return 0;
	}
