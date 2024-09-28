#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
	char str1[50], str2[50],str3[100];
	char *g;
	printf("Enter a string\n");
	gets(str1);
	printf ("Enter another string\n");
	gets(str2);
	g=strcmp(str1, str2);
	printf("%s",g);
	
	
}
