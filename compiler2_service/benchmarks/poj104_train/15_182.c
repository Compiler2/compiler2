#define NUM_ITER 695

#include <header.h>

int main_bench()
{
	int a[1000][1000],h1,h2,l1,l2,c=0,b=0;
	int n,i,j,h,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				my_scanf("%d",&a[i][j]);
		}
	}
	for(h=0;h<n;h++)
	{
		for(k=0;k<n;k++)
		{
			if(a[h][k]==0)
			{
				h1=h;
				l1=k;
				c=1;
				break;
			}
		}
	if(c==1)  break;	
	}
	for(i=n-1;i>0;i--)
	{
		for(j=n-1;j>0;j--)
		{
			if(a[i][j]==0)
			{
				h2=i;
				l2=j;
				b=1;
				break;
			}
		}
	if(b==1)  break;
	}
	my_printf("%d\n",(h2-h1-1)*(l2-l1-1));
	return 0;
}