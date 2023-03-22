#define NUM_ITER 9875

#include <header.h>

int main_bench()
{
	int i,j,k=0,a[301]={0},n,t,flag;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		flag=1;
		my_scanf("%d",&t);
		for(j=0;j<k;j++)
			if(t==a[j])
			{flag=0;break;}
		if(flag==1)a[k++]=t;
		}
	if(k>1)for(i=0;i<k-1;i++)my_printf("%d,",a[i]);
	my_printf("%d\n",a[k-1]);
}