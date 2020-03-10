#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i;
	printf("Enter a string ");
	gets(x);
	printf("The string is %s \n",x);
	printf("The ascii value in hexa decimal is: ");
	for(i=0;x[i]!='\0';i++)
	{
	printf("%02d",x[i]);
	}
	return 0;
}
