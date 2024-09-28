#include<stdio.h>
#include<conio.h>
#include<math.h>
int binary_decimal(int number);
 main()
{
	int number;
	printf("Enter a binary number:\n");
	scanf("%d",&number);
	printf("\n\n\t%d in decimal",binary_decimal(number));
	getch();
}
int binary_decimal(int number)
{
	int decimal=0,i=0,rem;
	while(number!=0)
	{
		rem=number%10;
		number=number/10;
		decimal=decimal+rem*pow(2,i);
		++i;
	}
	return decimal;
}
