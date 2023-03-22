#include <header.h>

int main_bench()
{
	int m,n,zong,x,y,sum,i,zanshi;
	int *c,*d;
	my_scanf("%d %d",&m,&n);
	zong=m*n;
	d=(int*)malloc(zong*sizeof(int));
	c=d;
	for(;c<d+zong;c++)my_scanf("%d",c);
	for(sum=2;sum<=m+n;sum++)
	{
		for(y=1;y<sum;y++)
		{
			x=sum-y;
			zanshi=n*(y-1)+x;
			if(x<=n&&y<=m&&zanshi>=1&&zanshi<=zong)my_printf("%d\n",*(d+zanshi-1));
		}
		
	}
	
}