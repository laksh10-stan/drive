#include<stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 31; i > 0; i = i / 2) 
	{
		printf("%d\n",i);
		printf("%d\n",n);
		
		(n & i)? printf("1"): printf("0"); 
	}
} 

int main(void) 
{ 
	bin(7); 
	printf("\n"); 
	bin(4); 
	printf("\n"); 
	int z = 1 << 31;
	
	printf("%d",z);
} 

