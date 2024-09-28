#include<stdio.h>
#include <conio.h>
  void evenodd(int);
  int main(){
              int number,remainder;
              clrscr();
              printf(" Enter an integer number: ");
              scanf("%d",&number);
              evenodd(number);
              getch();
              return(0);
              }

  void evenodd(int number){
             int remainder;
             remainder = abs(number) % 2;
             switch(remainder){
                        case 0 : printf("\n %d is an even number.",number);
                                     break;
                        case 1 : printf("\n %d is an odd number.",number);
                                     break;
             return(0);
             }
             }
