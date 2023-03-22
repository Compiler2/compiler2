#define NUM_ITER 40701

#include <header.h>

int main_bench()
{
    int n,m,a[100],i,b[100],c[100];
	int *start,*qian,*hou;
	qian=b;
	hou=c;
	my_scanf("%d",&n);
	my_scanf("%d",&m);
	
	for (start=a;start<a+n;start++)
	{
	    my_scanf("%d",&*start);
	}                                      
    
    for (i=0;i<n-m;i++)
    *(qian+i)=a[i];
    for (i=n-m;i<n;i++)
    *(hou+i-n+m)=a[i];
    for (i=0;i<m;i++)
    a[i]=*(hou+i);
    for (i=m;i<n;i++)
    a[i]=*(qian+i-m);
    
    for (i=0;i<n-1;i++)
    my_printf("%d ",*(a+i));
    my_printf("%d",*(a+n-1));
}