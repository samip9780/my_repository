#include<stdio.h>
int main()
{
	int i,j,a;
	printf("The prime numbers between 1 and 100 are: \n");
	for(i=1;i<=100;i++)
	{
		a=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			a++;
		}
		if(a==2)
		printf("%d\t",i);
	}
	return 0;
}
