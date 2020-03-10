#include<stdio.h>
#include<string.h>
int main()
{
	char x[10][10],y[10][10],t[10];
	int i,j;
	for(i=0;i<=9;i++)
	{
		printf("\nName of student %d ",i+1);
		scanf("%s",x[i]);
		strcpy(y[i],x[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if( strcmp(x[i] , x[j])>0)
			{
			strcpy(t,x[i]);
			strcpy(x[i],x[j]);
			strcpy(x[j],t);
			}
		}
	}
	printf("\n_______________________________________\n");
	printf("Input Name \t Sorted Name");
	printf("\n_______________________________________\n");
	for(i=0;i<10;i++)
	{
		printf("%s \t\t %s \n",y[i],x[i]);
		
	}
	printf("\n_______________________________________");
	return 0;
}
