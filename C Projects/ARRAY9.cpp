#include<stdio.h>
int main()
{
	int matrix[2][3],i,j;
	printf("Enter matrix element : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			{
		printf("Enter the element of a%d%d ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			}
		}
		printf("\n The Entered 2x3 Matrix is :\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d    ",matrix[i][j]);
			}
			printf("\n");
		}
			return 0;
	}
