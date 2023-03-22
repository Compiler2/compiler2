#include <header.h>

int main_bench()
{
	int x1,y1,x2,y2;
	int i,j,t;
	int a[200][200],b[200][200],c[200][200]={0};
	my_scanf("%d%d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&x2,&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(t=0;t<y1;t++)
			{
				c[i][j]+=a[i][t]*b[t][j];
			}
			if(j==y2-1)
				my_printf("%d\n",c[i][j]);
			else my_printf("%d ",c[i][j]);
		}
	}	
	return 0;
}
