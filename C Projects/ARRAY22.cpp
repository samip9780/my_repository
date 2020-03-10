#include<stdio.h>
#include<string.h>
int main()
{
char x[100],a;
int i,c=0;
	printf("Enter a string ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		a=x[i];
		if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
		c++;
	}
	printf("There are %d vowels in the string %s",c,x);
	return 0;
}
