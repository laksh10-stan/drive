#include<stdio.h>
#include<math.h>
void typecasting();
void math();

main()
{
int a=985,b;
b=sizeof(a);
printf("%d",b);
typecasting();
math();
		
}
void typecasting()
{
	int male=1000,female=857;
	float ratio;
	ratio=(float)female/male;
	printf("\n%f",ratio);
	
}
void math()
{
	float z=7.8, a=2.35,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
	b=acos(a);
	printf("\n%f",b);
	c=asin(a);
	printf("\n%f",c);
	d=atan(a);
	printf("\n%f",d);
	e=cos(a);
	printf("\n%f",e);
	f=cosh(a);
	printf("\n%f",f);
	g=ceil(a);
	printf("\n%f",g);
	h=exp(a);
	printf("\n%f",h);
	i=fabs(a);
	printf("\n%f",i);
	j=floor(a);
	printf("\n%f",j);
	k=fmod(a,z);
	printf("\n%f",k);
	l=log(a);
	printf("\n%f",l);
	m=log10(a);
	printf("\n%f",m);
	n=pow(a,z);
	printf("\n%f",n);
	q=sqrt(a);
	printf("\n%f",q);
	
}
