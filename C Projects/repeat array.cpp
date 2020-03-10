#include<stdio.h>
int main()
{
	int a[100],i,s,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number%d ",i+1);
		scanf("%d",&a[i]);
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
		if(s<a[i])
		s=a[i];
	}
	printf("\nThe greatest number in the array is %d ",s);
	return 0;
}
