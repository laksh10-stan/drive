#include<stdio.h>
#include<stdlib.h>
int main()
{

	int c;
	char a[20],b[10];
	printf("Enter a string:\n");
	gets(a);
	printf("Enter a substring:\n");
	gets(b);
	c=strstr(a,b);
	if(c=='NULL')
	printf("Substring not found:\n");
	else
	printf("Substring found:\n");
	return 0;
}

