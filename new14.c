#include <stdio.h>
#include <conio.h>
void main() {
	int i,j,asci,spc;
	
	for (i=7; i>=1; i--) {
		for (spc=6; spc>=i; spc--) {
			printf("  ");
		}
		asci=65;
		for (j=1; j<=i; j++) {
			printf("%2c",asci++);
		}
		for (j=i-1; j>=0; j--) {
			printf("%2c",--asci);
		}
		printf("\n");
	}
	getch();
}
