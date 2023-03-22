#define NUM_ITER 7804

#include <header.h>

int main_bench()
{
	int n,m,i,j,t,r,l;
	int num[100];
	my_scanf("%d""%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
	}
	for(j=0;j<m;j++)
	{
		t=num[n-1];
		for(r=n-2;r>=0;r--)
		{
			num[r+1]=num[r];
		}
		num[0]=t;
	}
	for(l=0;l<n;l++)
	{
              if(l>0)
{
	 	my_printf(" %d",num[l]);
}
else
{my_printf("%d",num[l]);}
	}

    return 0;
}