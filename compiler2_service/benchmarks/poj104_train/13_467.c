#define NUM_ITER 10694

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,flag,a[20000],b[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		flag=1;
	    for(j=0;j<i;j++)
		{if(a[i]==a[j])
	    flag=0;}
	    if(flag==1)
		{b[k]=a[i];
		k++;}
	}
	for(i=0;i<k-1;i++)
		my_printf("%d ",b[i]);
	my_printf("%d\n",b[i]);
}

