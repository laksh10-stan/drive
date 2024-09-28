#include <stdio.h>

int main()
{
    int i, j, k,n,m;
    printf("Enter the no. of rows:\n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
    m=n-1;
    for(i=m;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;
} 

