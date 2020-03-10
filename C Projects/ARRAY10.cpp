#include<stdio.h>
int main()
{
	int a,b,i,j,m[10][10],n[10][10];
printf("Enter the no. of row and column; m,n : ");
scanf("%d%d",&a,&b);
printf("\n Enter the elements of 1st matrix: \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("\nEnter the element of a%d%d: ",i+1,j+1);
		scanf("%d",&m[i][j]);
	}
}
printf("\n Enter the 2nd matrix element: \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("\nEnter the element of a%d%d: ",i+1,j+1);
		scanf("%d",&n[i][j]);
	}
}
printf("\n\n The first matrix is: \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("%d       ",m[i][j]);
}
printf("\n");
}
printf("\n The second matrix is: \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("%d       ",n[i][j]);
	}
	printf("\n");
}
printf("\nThe sum of the matrix is given as : \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("%d       ",m[i][j]+n[i][j]);
	}
	printf("\n");
}
printf("\nThe difference of 2nd matrix from 1st matrix is: \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("%d       ",m[i][j]-n[i][j]);
	}
	printf("\n");
}
printf("\nThe product of two matrix is : \n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("%d       ",m[i][j]*n[i][j]);
	}
	printf("\n");
}
return 0;
}
