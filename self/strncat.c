#include<stdio.h>
#include<stdlib.h>
void sstrstr();
int main()
{
char a[20],b[20],c[40];
	printf("Enter a string:\n");
	gets(a);
    printf("Enter a string:\n");
	gets(b);
	strncat(a,b,3);
	puts(a);
	return 0;
}
void strstr()
{
	int c;
	char a[20];
	printf("Enter a string:\n");
	gets(a);
	c=strstr(a,"goat");
	printf("%d",c);
}
