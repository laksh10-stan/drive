#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  	int i=0;
    // matrix 
    int mat[4][4] = { { 1, 2, 3, 4 }, 
                      { 25, 6, 7, 8 }, 
                      { 9, 10, 11, 12 }, 
                      { 13, 14, 15, 16 } }; 
  
    int * ptr = &mat[0][0];
    int max = mat[0][0];
    //printf("%d\n",max);
    for (i=0; i<4*4 ; i++, ptr++)
    {
    	 printf("%d\n",*ptr);
    	 if(*ptr > max)
    	 {
    	 	max = *ptr;
		 }
    	 
	}
	printf("%d\n",max);
	
   
  
    return 0; 
}
