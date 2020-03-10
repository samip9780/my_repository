#include<stdio.h>
int main()
{
	int a[100],i,n,c=0;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the marks of student %d ",i+1);
		scanf("%d",&a[i]);
		if(a[i]>60 && a[i]<80)
		c++;
	}
	printf("\n %d students scored marks between 60 and 80",c);
	return 0;
}
