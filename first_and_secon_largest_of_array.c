#include<stdio.h>
#include<conio.h>
main()
{
	
    int arr[100];
    int size, i, j, temp,f,s;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
	f=arr[0];
	s=arr[1];
	if(f<s)
	{
		temp=f;
		f=s;
		s=temp;
	}
	for(j=3;j<=size;j++)
	{
		if(arr[j]>f)
		{
			temp=f;
			f=arr[j];
			s=temp;
		}
		else if(arr[j]>s)
		{
			s=arr[j];
		}
	}
	printf("%d\t%d",f,s);

	}
	
	
	

