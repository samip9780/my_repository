#include<stdio.h>
int main()
{
	int a[10],i,b;
	for(i=0;i<10;i++)
	{
		printf("\nEnter element %d ",i+1);
		scanf("%d",&a[i]);
	}
	b=a[0];
	for(i=1;i<10;i++)
{
	if(a[0]<a[i])
	a[0]=a[i];
}
printf("\nThe largest number = %d",a[0]);
	for(i=1;i<10;i++)
	{
		if(b>a[i])
		b=a[i];
	}
	printf("\nThe Smallest Number = %d ",b);
return 0;
}
