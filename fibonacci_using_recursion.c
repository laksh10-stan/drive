/*
* C Program to print fibonacci series using recursion
*/
#include <stdio.h>
#include <conio.h>

int fib(int n);
int main()
{
    int n, c;
    printf("Enter number of terms in Fibonacci series: ");
    scanf("%d", &n);
    /*
     *  Nth term = (N-1)th therm + (N-2)th term;
     */
    printf("Fibonacci series till %d terms\n", n); 
    for(c = 0; c < n; c++)
	{
        printf("%d ", fib(c));
    }
    getch();
    return 0;
}
/*
 * Function to calculate Nth Fibonacci number
 * fibonacci(N) = fibonacci(N - 1) + fibonacci(N - 2);
 */
int fib(int n)
{
    /* Exit condition of recursion*/
    if(n < 2)
       return n;
    return fib(n - 1) + fib(n - 2);
}
