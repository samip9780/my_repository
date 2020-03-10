#include<stdio.h>
int main()
{
	int a[100],n,i,c=0;
	printf("Enter the total number of employees: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the salary of employee # %d ",i+1);
	scanf("%d",&a[i]);
	if(a[i]>10000 && a[i]<15000)
	c++;
	}
	printf("\nThe total number of employees with salary from 10000 to 15000 = %d",c);
	return 0;
}
