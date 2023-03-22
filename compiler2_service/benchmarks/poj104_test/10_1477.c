#define NUM_ITER 182131

#include <header.h>

int main_bench()
{
	int i,j,n,a[25],b[25],t=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=0,t=0;j<i;j++)
    	{
    	    if(a[j]>=a[i])
    		{
    			if(b[j]>t)
    			t=b[j];
    		}
    	}
    	if(t==0)
    	b[i]=1;
    	if(t>0)
    	b[i]=t+1;
    }
    for(i=0,t=0;i<n;i++)
    {
    	if(b[i]>t)
    	t=b[i];
    }
    my_printf("%d",t);
}