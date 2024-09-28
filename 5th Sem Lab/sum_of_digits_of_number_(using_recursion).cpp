#include <stdio.h>
 int sum (int a);
 int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 int sum (int num)
{
	int b,a;
    b=a%10;
	if(b>0)
printf("%d+",b);
else
printf("%d",b);
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
        
    }
    else
    {
       return 0;
    }

}
