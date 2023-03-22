#define NUM_ITER 14120

#include <header.h>

int main_bench()
{
    int n,j,k,m=1,x,a[1000];
    my_scanf("%d",&n);
    if(n==0) return(0);
	else
	{
    my_scanf("%d",&x);
    my_printf("%d",x); 
    a[0]=x; 
	for(j=1;j<n;j++)
	{
		my_scanf("%d",&x);
		k=0;
		while((k<m) && (a[k]!=x))
			k++;
		if(k==m) 
		{a[m++]=x;
		my_printf(" %d",x);
		}
	}
	my_printf("\n");
	}
}