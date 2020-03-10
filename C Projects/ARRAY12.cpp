#include<stdio.h>
int main()
{
	int a[10],b,c,d=0,i,j;
	for(i=0;i<10;i++)
	{
		printf("\n Enter the marks of student %d ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nThe Top five marks are: \n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
		if(a[i]<a[j])
			{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
			}
		}
	}
for(i=0;i<5;i++)
{
		printf("\n %d",a[i]);
	}
	return 0;
}
