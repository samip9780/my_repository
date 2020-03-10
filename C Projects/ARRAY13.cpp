#include<stdio.h>
int main()
{
	int a[10],b[10],i;
		printf("Enter the content of 1st array a[10]: \n");
	for(i=0;i<10;i++)
	{
		printf("\nEnter the element %d ",i+1);
		scanf("%d",&a[i]);
		b[9-i]=a[i];
	}
	printf("\nThe content of second array b[10] are: \n");
	for(i=0;i<=9;i++)
	{
		printf("\na[%d] = b[%d] = %d",9-i,i,b[i]);
	}
	return 0;
}
