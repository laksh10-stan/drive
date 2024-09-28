#include <stdio.h>
#include <conio.h>
void main() {
	int rw, c, no=1 ,len;
	
	printf("Enter number of rows: ");
	scanf("%d", &len);
	for (rw=1; rw<=len; rw++) {
		printf("\n");
		for (c=1; c<=rw; c++) {
			printf(" %2d ", no);
			no++;
		}
	}
	getch();
}
