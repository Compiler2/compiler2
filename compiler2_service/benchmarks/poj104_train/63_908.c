#include <header.h>


int main_bench()
{
	int x1,y1,X,Y,i;
	my_scanf("%d%d",&x1,&y1);
	int a[100][100];
	for(X=0;X<x1;X++)
	{
		for(Y=0;Y<y1;Y++)
		{
			my_scanf("%d",&a[X][Y]);
		}
	}
	int x2,y2;
	my_scanf("%d%d",&x2,&y2);
	int b[100][100];
	for(X=0;X<x2;X++)
	{
		for(Y=0;Y<y2;Y++)
		{
			my_scanf("%d",&b[X][Y]);
		}
	}
	int c[100][100];
		for(X=0;X<100;X++)
	{
		for(Y=0;Y<100;Y++)
		{
			c[X][Y]=0;
		}
	}
	for(X=0;X<x1;X++)
	{
		for(Y=0;Y<y2;Y++)
		{
			for(i=0;i<x2;i++)
			c[X][Y]+=(a[X][i]*b[i][Y]);
		}
	}
	for(X=0;X<x1;X++)
	{
		for(Y=0;Y<y2;Y++)
		{
			if((Y+1)%y2!=0)
				my_printf("%d ",c[X][Y]);
			else
				my_printf("%d\n",c[X][Y]);
		}
	}
	return 0;
}