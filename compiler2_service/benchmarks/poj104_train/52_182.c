#define NUM_ITER 8960

#include <header.h>


void move(int num[30],int n,int m)
{
	int *p;
	int end,j;
	end=*(num+n-1);
	for(j=1;j<=m;j++)
	{
		
		end=*(num+n-1);
		for(p=num+n-1;p>num;p--)
		{
			*p=*(p-1);
		}
			*num=end;
	}
	
}


int main_bench()
{
	int n,m,i;
	int a[30];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	move(a,n,m);
	for(i=0;i<n;i++)
	{
		my_printf("%d",a[i]);
		if(i!=n-1)
		{
			my_printf(" ");
		}
	}
	return 0;
}