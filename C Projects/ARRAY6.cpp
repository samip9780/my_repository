#include<stdio.h>
int main()
{
	int i,j,a,b[10],c,d,e;
	for(i=0;i<10;i++)
	{
		printf("\n Enter the marks of student %d ",i+1);
		scanf("%d",&b[i]);
	}
	c=b[0];
	e=c;
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(b[i]<b[j])
		{
			d=b[i];
			b[i]=b[j];
			b[j]=d;
		}
	}
}
printf("\n The marks of students in Decending order is given as: ");
for(i=0;i<10;i++)
{
	printf("\n %d",b[i]);
}
	for(i=1;i<10;i++)
	{
		if(e>b[i])
		e=b[i];			// Smallest Number
	}
	printf("\n The lowest marks obtained is %d",e);	
	for(i=1;i<10;i++)
	{
		if(c<b[i])
		c=b[i];		//Largest Number
	}	
	printf("\n The Highest marks obtained is %d",c);
	return 0;
}
