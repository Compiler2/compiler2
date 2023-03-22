#define NUM_ITER 1145356

#include <header.h>


int huiwen(int x)
{
	int y=0;
	for(;x!=0;)
	{
		y=y*10+x%10;
		x=x/10;
	}
	return y;
}
int zhishu(int x)
{
	int i,k;
	k=x/2;
	for(i=2;x%i!=0&&i<k+1;i++);
	if(i==k+1) return 1;
	else return 0;
}
int main_bench()
{
	int l=1,n,m,i;
	my_scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(i==huiwen(i))
			if(zhishu(i))
			{
				if(l==1){my_printf("%d",i);l++;}
				else my_printf(",%d",i);
			}
	}
	if(l==1)
		my_printf("no");
}
