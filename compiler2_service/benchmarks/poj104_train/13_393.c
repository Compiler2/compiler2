#define NUM_ITER 8047

#include <header.h>

int main_bench()
{
	int a[20000],b[20000];
	int n,i,k,j,l,m,bn;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
    b[0]=a[0];
	m=0;
    for(j=1;j<n;j++)
	{
		for(k=0,l=1;k<j;k++)
		{
			if(a[j]==a[k])
			{ 
				l=0;
				break;
			}
		}
	    if(l!=0)
		{
			m+=1;
			b[m]=a[j];
		}
	}
	for(bn=0;bn<m;bn++)
	{
		my_printf("%d ",b[bn]);
	}
    my_printf("%d",b[m]);
}