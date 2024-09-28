#include <stdio.h>
#include <conio.h>
 main()
{
	int quantity,price;
	printf ("enter the values of quantity and price");
	scanf ("%d%d",&quantity,&price);
	int salary=1500;
	float rate=0.03;
	float bonus=50;
	float commision;
	commision=quantity*rate*price;
	printf ("commision is %f",commision);
	float sale;
	sale=bonus+commision+salary;
	printf ("sale is %f",sale);
	return 0;
	
}
