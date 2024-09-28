#include<stdio.h>
#include<math.h>
struct stu
{
int x;
int y;
};
int main()
{
	int i,j,k,x,y,x1,x2,y1,y2;
	struct stu s[10];
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
	printf("Enter coordinates \n");
	for(i=0;i<3;i++)
	{
		scanf("%d%d",&s[i].x,&s[i].y);
		printf("\n");	
	}
	x1 = s[0].x;
	x2 = s[1].x;
	y1 = s[0].y;
	y2 = s[1].y;
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
	x1 = s[2].x;
	x2 = s[1].x;
	y1 = s[2].y;
	y2 = s[1].y;
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
	x1 = s[0].x;
	x2 = s[2].x;
	y1 = s[0].y;
	y2 = s[2].y;
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
