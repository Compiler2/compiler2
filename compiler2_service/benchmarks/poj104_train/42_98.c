#define NUM_ITER 51561

#include <header.h>

int main_bench()
{
	int n,k,i,m,t,a[100001];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)  my_scanf("%d",&a[i]);
	my_scanf("%d\n",&k);
	a[n]=k+1;
	for(m=0,i=0;i<n;i++) 
	{
		if(a[i]==k) 
		{
		    t=i;
			for(i=t;i<n;i++) a[i]=a[i+1];
			a[t]==k ? (i=t-1):(i=t);
			m++;
		}
	}
    if(m!=n)
	{
		for(i=0;i<n-m-1;i++) my_printf("%d ",a[i]);  
	    my_printf("%d",a[n-m-1]);
	}
}