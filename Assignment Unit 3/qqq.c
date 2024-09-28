#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{
  char str1[10], str2[10], str3[10], res[30];

 
  printf("Enter first string:-> ");
  scanf("%s", str1);
  printf("enter second string :-> ");
  scanf("%s", str2);
  printf("enter third string :-> ");
  scanf("%s", str3);
  strcpy(res,str1);
  strcat(res," ");
  strcat(res,str2);
  strcat(res," ");
  strcat(res,str3);
  printf("Final String ->  %s", res);
  
}
