#include <stdio.h>
#include <string.h>
int main()
{
	char x[100];
	int a, b, c, l = 0;
	printf("Enter a string \n");
	gets(x);
	while (x[l] != '\0')
	{
		l++;
	}
	c = l - 1;
	b = l / 2;
	for (a = 0; a < b; a++)
	{
		if (x[a] != x[c])
		{
			printf("\n String is not a palindrome");
			break;
		}
		c--;
	}
	if (a == b)
		printf("\n String is palindrome");
	return 0;
}
