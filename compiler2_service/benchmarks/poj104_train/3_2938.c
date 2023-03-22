#define NUM_ITER 6082

#include <header.h>

int main_bench()
{
	int n,k;
    int a[1000];
    my_scanf("%d%d",&n,&k);
	int i,j,r,f;
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	f=0;
    for(j=0;j<n;j++)
	{
	    for(r=j+1;r<n;r++)
		{
		    if(a[j]+a[r]==k)
			{
			    f++;
			}
		}
	}
	if(f>0)
	{
		my_printf("yes");
	}
	else 
		my_printf("no");
    return 0;
}
