#include<stdio.h>
#include<math.h>
int factorial(int num)
{
    int ctr;
    int fact=1;//This function calculates and returns the factorial of number num
    for(ctr=1;ctr<=num;ctr++)
    fact=fact*ctr;
    return fact;
}
int main()
{
int terms;
int ctr;
printf("Enter the number of terms till which you want to calculate the value of expansion\n");
scanf("%d",&terms);//Enter the number of terms
double sum=0.0;
double x;
printf("Enter the value for x\n");
scanf("%lf",&x);
printf("1+x+x^2/2!+x^3/3!.......This series when expanded till infinity is expansion for exp(x)\n");
for(ctr=0;ctr<terms;ctr++)
sum+=pow(x,ctr)/factorial(ctr);//finding the value for sum appropriately
printf("The value from the expansion is %.14lf\n",sum);
sum=0.0;
printf("1-x^2/2!+x^4/4!.......This series when expanded till infinity is expansion for cosine(x)\n");
for(ctr=0;ctr/2<terms;ctr+=2)
sum=sum+pow(-1,ctr/2)*pow(x,ctr)/(factorial(ctr));
printf("The value from the expansion is %.14lf\n",sum);
sum=0.0;
printf("x-x^3/3!+x^5/5!.......This series when expanded till infinity is expansion for sine(x)\n");
for(ctr=1;(ctr-1)/2<terms;ctr+=2)
sum=sum+pow(-1,(ctr-1)/2)*pow(x,ctr)/(factorial(ctr));
printf("The value from the expansion is %.14lf\n",sum);
printf("x+x^3/3+2x^5/15.......This series when expanded till infinity is expansion for tan(x)\n");
sum=0.0;
double B,temp;
int Bn,k,r;
for(ctr=1;ctr<=terms;ctr+=1)
{//This loops here calculate Bernoulli number which is further used to get the coefficient in expansion of tan x
B=0;
Bn=2*ctr;
for(k=0;k<=Bn;k++)
{
    temp=0;
for(r=0;r<=k;r++)
{
    temp=temp+pow(-1,r)*factorial(k)*pow(r,Bn)/(factorial(r)*factorial(k-r));
}
B=B+temp/((double)(k+1));
}
sum=sum+pow(-4,ctr)*(1-pow(4,ctr))*B*pow(x,2*ctr-1)/factorial(2*ctr);
}
printf("The value from the expansion is %.14lf\n",sum);

}
