#include<stdio.h>
#include<string.h>
main()
{
	int i,n,j=1;
	FILE *fp;
	fp=fopen("record.txt","w");
	printf("Enter the no. of students whose data you want to insert:\n");
	scanf("%d,&n");
	int A[n];
	char B[n];
	fprintf(fp,"S_name\tMarks\n");
	printf("Enter the record of students:\n");
	for(i=0;i<n;i++)
	{
		printf("Name of student no. %d",j);
		scanf("%s",B);
		printf("Marks of student no. %d",j);
		scanf("%d",A[i]);
		fprintf(fp,"%s\t\t",B);
		fprintf(fp,"%d\n",A[i]);
	}
	fclose(fp);
}
