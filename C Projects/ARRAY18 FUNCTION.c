#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter a string : \n");
    gets(a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
        printf("\n The string is palindrome ");
    else
        printf("\n The String is not palindrome");
    return 0;
}
