#define NUM_ITER 47444

#include <header.h>

int main_bench()
{
	int a[100],m,n,i,b[100];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        b[i]=a[n-m+i];
    }
    for(i=m;i<n;i++)
    {
        b[i]=a[i-m];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            my_printf("%d",b[0]);
        }
        else
        {
            my_printf(" %d",b[i]);
        }
    }
    return 0;
}