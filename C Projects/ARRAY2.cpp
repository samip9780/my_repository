#include<stdio.h>
int main()
{
	int a[10],i,*pa;
	pa=&a[0];
	printf("Enter array elements ");
	for(i=0;i<10;i++)
	{
		printf("\n Enter element %02d ",i+1);
		scanf("%d",pa+i);
	}
	printf("\nEntered Values are: ");
	printf("\n Address \t\t Variable \t\t Value");
		
	for(i=0;i<10;i++)
	{
		printf("\n %08x \t\t a[%d] \t\t\t %d",(pa+i),i,*(pa+i));
	}
	return 0;
}
