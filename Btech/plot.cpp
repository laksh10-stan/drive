#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
class point
{
	public:
		int x;
		int y;
		int setdata(int q,int w)
		{
			x=q;
			y=w;
		}
};
int main()
{
	point s1,s2,s3;
	int a1,a2,b2,c2,b1,c1,x1,y1,x2,y2,x,y,i,j,k,n1,n2,n3,p=0,o=0,u=0;
	int g[20][20];
	for (i=0;i<20;i++)
		for(j=0;j<20;j++)
			g[i][j]='-';
	printf("Enter 1 for points:\nEnter 2 for line:\nEnter 3 for triangle:\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
		{	printf("Enter the no. of points you want to print:\n");
			scanf("%d",&n1);
			while(n1!=0)
			{
				
				printf("Enter the coordinates of the point no. %d:\n",p+1);
				scanf("%d%d",&a1,&a2);
				s1.setdata(a1,a2);
				for (i=0;i<20;i++)
				{
					for(j=0;j<20;j++)
					{
						if(i==s1.x && j==s1.y)
							g[i][j]='*';
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
				n1--;
				p++;
				for (i=0;i<20;i++)
					for(j=0;j<20;j++)
						g[i][j]='-';
			}
			break;	
				
		}
		case 2:
		{
			printf("Enter the no. of lines you want to print:\n");
			scanf("%d",&n2);
			while(n2!=0)
			{
				printf("Enter the coordinates of point 1 of line no. %d:\n",o+1);
				scanf("%d%d",&a1,&a2);
				s1.setdata(a1,a2);
				printf("Enter the coordinates of point 2 of line no. %d:\n",o+1);
				scanf("%d%d",&b1,&b2);
				s2.setdata(b1,b2);
				x1=s1.x;
				y1=s1.y;
				x2=s2.x;
				y2=s2.y;	
				if(abs(x1-x2)>abs(y1-y2))
				{
					if(x1>x2)
					{
						for(x=x2;x<=x1;x++)
						{
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							for (i=0;i<20;i++)
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
				n2--;
				o++;
				for (i=0;i<20;i++)
					for(j=0;j<20;j++)
						g[i][j]='-';
			}
			break;
		}
		case 3:
		{
			printf("Enter the no. of triangles you want to print:\n");
			scanf("%d",&n3);
			while(n3!=0)
			{
				printf("Enter the coordinates of point 1 of triangle no. %d:\n",u+1);
				scanf("%d%d",&a1,&a2);
				s1.setdata(a1,a2);
				printf("Enter the coordinates of point 2 of triangle no. %d:\n",u+1);
				scanf("%d%d",&b1,&b2);
				s2.setdata(b1,b2);
				printf("Enter the coordinates of point 3 of triangle no. %d:\n",u+1);
				scanf("%d%d",&c1,&c2);
				s3.setdata(c1,c2);
				x1=s1.x;
				y1=s1.y;
				x2=s2.x;
				y2=s2.y;	
				if(abs(x1-x2)>abs(y1-y2))
				{
					if(x1>x2)
					{
						for(x=x2;x<=x1;x++)
						{
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							for (i=0;i<20;i++)
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
				x1=s2.x;
				y1=s2.y;
				x2=s3.x;
				y2=s3.y;
				if(abs(x1-x2)>abs(y1-y2))
				{
					if(x1>x2)
					{
						for(x=x2;x<=x1;x++)
						{
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							for (i=0;i<20;i++)
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
				x1=s3.x;
				y1=s3.y;
				x2=s1.x;
				y2=s1.y;
				if(abs(x1-x2)>abs(y1-y2))
				{
					if(x1>x2)
					{
						for(x=x2;x<=x1;x++)
						{
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							y=round((float)(((y2-y1)*(x-x1)/(x2-x1)))+y1);
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							for (i=0;i<20;i++)
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
							x=round((float)(((x2-x1)*(y-y1)/(y2-y1)))+x1);
							for (i=0;i<20;i++)
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
				u++;
				n3--;
				for (i=0;i<20;i++)
					for(j=0;j<20;j++)
						g[i][j]='-';
			}
			break;
		}
		default:
		{
			printf("Enter valid data:\n");
			break;
		}
	}
	return 0;
}
