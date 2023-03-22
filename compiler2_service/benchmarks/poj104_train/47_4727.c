#include <header.h>

int main_bench()
{
	int n,zj,m;
	int *p,*q;
	int a[101];
    my_scanf("%d",&n);
    for(p=a;p<a+n;p++)
    my_scanf("%d",p);
    m=(n-1)/2;
    for(p=a,q=a+n-1;p<a+m+1;p++,q--)
    {
    	zj=*p;*p=*q;*q=zj;
    }
    for(p=a;p<a+n-1;p++)
    my_printf("%d ",*p);
    my_printf("%d",*(a+n-1));
    
    
    
}