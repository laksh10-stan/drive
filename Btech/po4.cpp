//ptrint = reinterpret_cast<int*>(flovar);
//ptrflo = reinterpret_cast<float*>(intvar);

#include<iostream>
using namespace std;
int main()
{
float flovar = 98.6;
int intvar = 12;
int *ptrint;
int *ptrflt;
ptrint = reinterpret_cast<int*>(flovar); 
ptrflt = reinterpret_cast<float*>(intvar); 
}
