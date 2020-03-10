#include<stdio.h>
int main()
{
	char x[100]="Computer ",y[]="is the future";
int i,j;
for(i=0;x[i]!='\0';i++)
{}
printf("i = %d \n",i);
for(j=0;y[j]!=0;j++,i++)
{
	x[i]=y[j];
}
x[i]='\0';
printf("After concatenation: ");
puts(x);

return 0;
}
