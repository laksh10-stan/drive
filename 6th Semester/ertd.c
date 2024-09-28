#include<stdio.h>
main()
{
	char ad[80],pad[70];
	printf("Enter the adress:\n");
	scanf("%[a-z]",ad);
	printf("%-80s",ad);
	printf("Enter the adress:\n");
	scanf("%[^\n]",pad);
	printf("%-70s\n\n",pad);

}
