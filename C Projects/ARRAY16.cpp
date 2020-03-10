#include<stdio.h>
#include<string.h>
int main()
{
	char string[1000];
printf("Enter a string to display in Uppercase : \n");
gets(string);	
printf("\nString in UPPERCASE is : %s \n",strupr(string));
return 0;
}
