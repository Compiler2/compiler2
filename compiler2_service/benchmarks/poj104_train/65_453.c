#define NUM_ITER 37409

#include <header.h>

int main_bench()
{
	int n,i,j,x=0,y=0,z=0;
	int a[201],b[201];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(j=0;j<n;j++)
    {
		if(a[j]!=b[j])
		{
			if((a[j]==0&&b[j]==1)||(a[j]==1&&b[j]==2)||(a[j]==2&&b[j]==0))
		{
			x++;
		}else
		{
			y++;
		}
		}else
		{
			continue;
		}
    }
	if(x>y)
	{
		my_printf("A");
	}else if(x<y)
	{
		my_printf("B");
	}else if(x==y)
	{
		my_printf("Tie");
	}
return 0;
}