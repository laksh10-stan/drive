#include<stdio.h>
void acf();
main()
{
	char ad[80],pad[70];
//	printf("Enter the adress:\n");
//	scanf("%[a-z]",ad);
//	printf("%-80s\n\n",ad);
//	printf("Enter the adress:\n");
//	scanf("%[^\n]",pad);
//	printf("%-70s\n\n",pad);
		printf("Enter the adress:\n");
	scanf("%[..]",ad);
	printf("%-80s\n\n",ad);
acf();
	
}
void acf()
{
	char ad[80],pad[70];
	printf("Enter the adress:\n");
	scanf("%[^\n]",pad);
	printf("%-70s\n\n",pad);
}
