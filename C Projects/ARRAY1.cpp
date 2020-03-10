#include<stdio.h>
int main()
{
	float arr[10],i,product=1,avg,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the value of arr[%d]",i);
		scanf("%f",&arr[i]);
		sum+=arr[i];
		product*=arr[i];
	}
	for(i=1;i<10;i++)
	{
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
	avg=sum/10;
	printf("\nThe sum of the elements of array = %.0f",sum);
	printf("\nThe product of the elements of array = %d",product);
	printf("\nThe average value of the array element= %.2f",avg);
	printf("\nThe maximum value in the array is %d",arr[0]);
	return 0;
}
