#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],y[100],i,j;
	printf("Enter the first string: ");
	gets(x);
	printf("\nEnter the second string: ");
	gets(y);
	for(i=0;x[i]!='\0';i++)
	{}
	for(j=0;y[j]!='\0';j++)
	{}
	if(i>j)
	printf("The larger string is %s",x);
	else if(i<j)
	printf("The larger string is %s",y);
	return 0;
}
