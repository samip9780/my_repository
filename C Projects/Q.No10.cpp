#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0)
	printf("\n The cube of %d = %d ",a,a*a*a);
	else
	printf("\n The Square of %d = %d",a,a*a);
	return 0;
}
