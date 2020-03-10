#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],i,b=0,c=0,d=0;
	printf("Enter a string ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		b++;
		else if(a[i]<='z'&&a[i]>='a')
		c++;
		else
		d++;
	}
	printf("\n The string contains \n %d Uppercase letters\n %d Lowercase letters\n %d Spaces",b,c,d);
	return 0;
}
