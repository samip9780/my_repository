#include<stdio.h>
int main()
{
	int i,n[25],a=0,b=0,c=0,d=0;
for(i=0;i<25;i++)
{
	printf("Enter the element %d ",i+1);
	scanf("%d",&n[i]);
	if(n[i]<0)
	a++;
	else
	b++;


	if(n[i]%2==0)
	c++;
	else
	d++;
}
printf("There are %d odd numbers and %d even numbers \n",d,c);
printf("There are %d positive numbers and %d negative numbers",b,a);
return 0;
}
