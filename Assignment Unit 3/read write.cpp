#include <stdio.h>
#include <conio.h>
struct emp

{
	
	char name[10];
	int age;
};
main()
{
    struct emp e;
    FILE*p,*q;
	p=fopen("XYZ.txt","a");
    q=fopen("XYZ.txt","r");

	printf("Enter name and age");
	scanf("%s%d",e.name,&e.age);
	fprintf (p,"%s%d",e.name,e.age);
	fclose(p);
	do
	{
		fscanf (q,"%s%d",e.name,&e.age);
		printf ("%s%d",e.name,e.age);
	}while(!feof(q));
	getch();
}
	






