#include<stdio.h>
#include<string.h>
int main()
{
	char string[1000];
	printf("Enter a string to display in lowercase: ");
	gets(string);
	printf("\n The string in lowercase: %s \n",strlwr(string));
	return 0;
}
