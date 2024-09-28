#include<stdio.h>
struct employee {
	int sal;
	char name[10];
};
 main()
{
	int i,n,b=1;
	FILE *fp;
	fp=fopen("Employee.txt","w");
	printf("Enter the no. of employees:\n");
	scanf("%d",&n);
	struct employee en[n];
	struct employee end[n];
	printf("Enter the details of %d employees:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter the details of Employee no. %d\n",b);
		printf("Enter the name:\n");
		scanf("%s",en[i].name);
		printf("Enter the salary:\n");
		scanf("%d",en[i].sal);
		b++;
		
	}
	fwrite(&en,sizeof(en),1,fp);
	fclose(fp);
	fp=fopen("Employee.txt","r+");
	fread(end,sizeof(end),1,fp);
	printf("The details of employees:\n");
	b=1;
for(i=0;i<n;i++)
	{
		printf(" the details of Employee no. %d",b);
		printf("%s",end[i].name);
		printf("%d",end[i].sal);
		b++;
	}	
}
