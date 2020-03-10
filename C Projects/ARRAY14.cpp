    #include <stdio.h>
    #include<string.h>
    int main()
	 {
        char string[25];
                printf("Enter string input ");
        gets(string);
        int i;
        for (i = 0; string[i] != '\0'; i++);
        printf("\nLength of the string: %d", i);
        return 0;
    }