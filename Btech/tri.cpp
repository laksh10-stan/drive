#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class point
{
	public:
		int x;
		int y;
    	int setdata(int q, int w)
    	{
	    	x=q;
	    	y=w;
		}  
};
int main()
{
	point s1,s2,s3;
	int i,j,k,x,y,x1,x2,y1,y2,a1,a2,b1,b2,c1,c2;
	char g[20][20];	
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			g[i][j] = '-';
			printf("-");
		}
		printf("\n");
	}
	printf("Enter coordinates of point 1: \n");
		scanf("%d%d",&a1,&a2);
		s1.setdata(a1,a2);
	printf("Enter coordinates of point 2: \n");
		scanf("%d%d",&b1,&b2);
		s2.setdata(b1,b2);
	printf("Enter coordinates of point 3: \n");
		scanf("%d%d",&c1,&c2);
		s3.setdata(c1,c2);	
	x1 = s1.x;
	x2 = s2.x;
	y1 = s1.y;
	y2 = s2.y;
	if (abs(x2-x1) > abs(y2-y1))
	{
		if(x1>x2)
		{
			for(x=x2;x<=x1;x++)
			{
				
				y=round(((float)(y2-y1)*(x-x1)/(x2-x1)) + y1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
		else 
		{
			for(x=x1;x<=x2;x++)
			{
				
				y=round(((float)(y2-y1)*(x-x1)/(x2-x1)) + y1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
	}
	else 
	{
		if(y1>y2)
		{
			for(y=y2;y<=y1;y++)
			{
				
				x=round(((float)(x2-x1)*(y-y1)/(y2-y1)) + x1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
		else 
		{
			for(y=y1;y<=y2;y++)
			{
				
				x=round(((float)(x2-x1)*(y-y1)/(y2-y1)) + x1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
	}
	x1 = s3.x;
	x2 = s2.x;
	y1 = s3.y;
	y2 = s2.y;
	if (abs(x2-x1) > abs(y2-y1))
	{
		if(x1>x2)
		{
			for(x=x2;x<=x1;x++)
			{
				
				y=round(((float)(y2-y1)*(x-x1)/(x2-x1)) + y1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
		else 
		{
			for(x=x1;x<=x2;x++)
			{
				
				y=round(((float)(y2-y1)*(x-x1)/(x2-x1)) + y1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
	}
	else 
	{
		if(y1>y2)
		{
			for(y=y2;y<=y1;y++)
			{
				
				x=round(((float)(x2-x1)*(y-y1)/(y2-y1)) + x1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
		else 
		{
			for(y=y1;y<=y2;y++)
			{
				
				x=round(((float)(x2-x1)*(y-y1)/(y2-y1)) + x1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
	}
	x1 = s1.x;
	x2 = s3.x;
	y1 = s1.y;
	y2 = s3.y;
	if (abs(x2-x1) > abs(y2-y1))
	{
		if(x1>x2)
		{
			for(x=x2;x<=x1;x++)
			{
				
				y=round(((float)(y2-y1)*(x-x1)/(x2-x1)) + y1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
		else 
		{
			for(x=x1;x<=x2;x++)
			{
				
				y=round(((float)(y2-y1)*(x-x1)/(x2-x1)) + y1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
	}
	else 
	{
		if(y1>y2)
		{
			for(y=y2;y<=y1;y++)
			{
				
				x=round(((float)(x2-x1)*(y-y1)/(y2-y1)) + x1);
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
		else 
		{
			for(y=y1;y<=y2;y++)
			{
				
				x=round(((float)(x2-x1)*(y-y1)/(y2-y1)) + x1);
				
				for(i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(x==i && y==j)
							{
								g[i][j]='*';
								break;
							}
					}
					if(x==i && y==j)
					{
						break;
					}
				}
			}
		}
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			printf("%c",g[i][j]);
		}
		printf("\n");
	}	
return 0;
}
