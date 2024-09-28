
#include<iostream>
using namespace std;
int main()
{
float flovar = 98.6;
void* ptrint = &flovar; //ERROR: can’t assign float* to int*
//cout << *ptrint;
cout << ptrint;

}
