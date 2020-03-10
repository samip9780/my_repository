#include<stdio.h>
int main()
{
	int a,b[10],i,j;
	for(i=0;i<=9;i++)
	{
	printf("\nEnter number %d ",i+1);
	scanf("%d",&b[i]);
}
for(i=0;i<=9;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(b[i]<b[j])
		{
			a=b[i];
			b[i]=b[j];
			b[j]=a;
		}
	}
}
printf("\nThe descending order of the numbers is as: ");
for(i=0;i<=9;i++)
{
	printf("\n%d",b[i]);
}
return 0;
}
