#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	printf("Enter any  number : ");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		c=b%10;
		sum+=c;
		b/=10;
	}
	printf("\n The sum of the digits of the number %d = %d",a,sum);
	return 0;
}
