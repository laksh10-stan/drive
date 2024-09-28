#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int choice, a,b,c;
	while (1)
	{
		printf("\n The Choices are:\n");
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter two numbers\n");
				scanf("%d%d",&a,&b);
				c=a+b;
				printf("Sum is %d\n",c);
				break;
			case 2:
				printf("Enter two numbers\n");
				scanf("%d%d",&a,&b);
				c=a-b;
				printf("Sub is %d\n",c);
				break;
			case 3:
				printf("Enter two numbers\n");
				scanf("%d%d",&a,&b);
				c=a*b;
				printf("Prod is %d\n",c);
				break;
			case 4:
				printf("Enter two numbers\n");
				scanf("%d%d",&a,&b);
				c=a/b;
				printf("div is %d\n",c);
				break;
			case 5:
				exit(0);
		    default:
			printf("Invalid Entry");				
		}
	}
	printf("\nThanks");

}
