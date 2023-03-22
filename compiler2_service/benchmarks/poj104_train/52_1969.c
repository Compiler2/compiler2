#define NUM_ITER 57416

#include <header.h>

int main_bench()
{
    int n,m,a[100],*p,i,t;
    my_scanf("%d %d",&n,&m);
    for(p=a;p<a+n;p++)
    my_scanf("%d",p);
    
    for(i=0;i<n-m;i++)
    {
    	t=a[0];
    	for(p=a;p<a+n-1;p++)
    	*p=*(p+1);
    	a[n-1]=t;
    }
    for(p=a;p<a+n-1;p++)
    my_printf("%d ",*p);
    my_printf("%d",a[n-1]);
}