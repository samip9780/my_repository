#include<stdio.h>
int main()
{
	int a,b,c,product=1;
	printf("Enter any number : ");
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{
		b=a%10;
		a/=10;
		product*=b;
	}
	printf("The product of the digits of %d = %d ",c,product);	
return 0;
}
